#include <stdio.h>

double power(double x, int n){
	if (x==1.0){
		return 1;
	}
	if (n==0){
		return 1;
	}else if ((n%2)==1){
		return (x*power((x*x),((n-1)/2)));
	}else {
		return (power((x*x),(n/2)));
	}
}

int main(){
	double output;
	int input_exponent=2e9;
	double input_base=0.9999999999;
	output = power(input_base,input_exponent);
	printf("%f\n",output);
	return 0;
}