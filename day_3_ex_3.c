#include <stdio.h>

double expo(double x){
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


double logarithm_natural(double x){
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

double power_logarithmic(double base, double exponent){
	double output;
	output=logarithm_natural(base);
	output*=exponent;
	output=expo(output);
	return output;
}


int main(){
	double out;
	out=power_logarithmic(3,8);
	printf("%f\n",out);
	return 0;
}