#include "mymath.h"

int is_prime(int c){
	int boolean=1,n=2;
	while (n <= square_root(c)){
		if ((c%n) != 0)
			boolean=1;
		else {
			boolean=0;
			break;
		}
		n++;
	}
	return boolean;
}

int GCD(int a, int b){
	if (a==0){
		return b;
	}
	while (b!=0){
		if (a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}

double absolut_value(double x){
	if (x>0){
		return x;
	}else if (x<0){
		return (-x);
	}else{
		return 0;
	}
}


double square_root(double a){
	double x=2,y=1;
	while ((absolut_value(x-y))>=1e-10){
		x=y;
		y=0.5*(x+(a/x));
	}
	return x;
}

int sum_odd(int a){
	int i,sum=0;
	for ((i=1); (i<=a); (i+=2)){
		sum+=i;
	}
	return sum;
}

int sum_multiples(int a, int b, int c){
	int n=1,sum=0;
	while (n<=c){ 
		if (((n%a)==0)||((n%b)==0)){
			sum+=n;
		}
		n++;
	}
	return sum;
}


int SCM(int x, int y){
	int scm;
	scm=(x/GCD(x,y));
	scm*=y;
	return scm;
}


double _cos(double x){
	double sum=0,summand=1;
	int n;
	for (n=1;absolut_value(summand)>1e-15;n++){
		sum+=summand;
		summand*=(-1);
		summand*=(x*x);
		summand/=((2*n)*(2*n-1));
	}
	return sum;
}

double _power(double x, int n){
	if (x==1.0){
		return 1;
	}
	if (n==0){
		return 1;
	}else if ((n%2)==1){
		return (x*_power((x*x),((n-1)/2)));
	}else {
		return (_power((x*x),(n/2)));
	}
}

double naiv_power(double x, int n){
	double out=1;
	int i;
	for (i=1;i<=n;i++){
		out*=x;
	}
	return out;
}


double _power_wo_r(double base, int expo){
	double out=1;
	double factor=base;
	if ((expo==0)||(base==1)){
		return 1;
	}
	else{
		for (;expo>0;expo/=2){
			if  ((expo%2)==1){
				out*=factor;
			}
			factor*=factor;
		}
	}
	return out;
}

double _expo(double x){
	int k;
	double summand=1,factor=1,sum=1;
	for (k=1;factor>1e-15; k++){
		factor/=k;
		summand*=x;
		summand/=k;
		sum+=summand;
	}
	return sum;

}


double _natural_logarithm(double x){
	int k=1;
	double half=0, summand=1,factor;
	factor=((x-1)/(x+1));
	summand=factor;
	factor*=factor;
	for (k=1;summand>1e-15;k+=2){
		half+=summand;
		summand*=k;
		summand/=(k+2);
		summand=summand*factor;
	}
	return (2*half);
}

double _logarithmic_power(double base, double exponent){
	double output;
	output=_natural_logarithm(base);
	output*=exponent;
	output=_expo(output);
	return output;
}