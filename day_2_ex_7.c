#include <stdio.h>
#include <math.h>

int main(){
	double x=3.14;
	int n=0;
	unsigned long int fak=1;
	double sum=1;
	for ((n=1); (n<13); n+=1){
		fak*=((2*n)*((2*n)-1));
		sum+=((pow((-1),n)*pow(x,(2*n)))/((double)fak));
	}
	printf("%f\n",sum);
	return 0;
}