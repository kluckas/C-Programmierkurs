#include <stdio.h>
#include <math.h>

int main(){
	int n=6,a=3,b=5,sum=8;
	while (n<=1000){
		if (((n%a)==0)||((n%b)==0)){
			sum+=n;
		}
		n++;
	}
	printf("%i\n",sum );
	return 0;
}