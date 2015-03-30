#include <stdio.h>

double power_wo_rec(double base, int expo){
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

int main(){
	int input_exponent=3;
	double input_base=2,output;
	output=power_wo_rec(input_base,input_exponent);
	printf("%f\n",output);
	return 0;
}