#include <stdio.h>
#include <math.h>

int main(){
	int n=1,a=3,b=5,teilerfunf,teilerdrei,sum=0;
	while (n<=1000){
		teilerfunf=n;
		while (b!=0){
			if (teilerfunf>b){
				teilerfunf=teilerfunf-b;
			}
			else{
				b=b-teilerfunf;
			}
		}
		teilerdrei=n;
		while (a!=0){
			if (teilerdrei>a){
				teilerdrei-=a;
			}
			else{
				a-=teilerdrei;
			}
		}
		if ((teilerdrei==3)||(teilerfunf==5)){
			sum+=n;
		}
		b=5;
		a=3;
		n++;
	}
	printf("%i\n", sum);
	return 0;
}