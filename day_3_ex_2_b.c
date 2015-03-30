#include <stdio.h>

double naiv_power(double x, int n){
	double out=1;
	int i;
	for (i=1;i<=n;i++){
		out*=x;
	}
	return out;
}
int main(){
	double out;
	double input_base=0.9999999999;
	int input_exponent=2e9;
	out=naiv_power(input_base,input_exponent);
	printf("%f\n",out);
	return 0;
}