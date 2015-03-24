#include <stdio.h>
#include <math.h>

int main(){
	int k=1;
	double sum=0.0;
	while ((1.0/(k*k))>1e-30){
		sum+=(1.0/(k*k));
		k++;
	}
	printf("%.4f\n", sum);
	return 0;
}