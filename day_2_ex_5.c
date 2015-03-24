#include <stdio.h>
#include <math.h>

int main(){
	int n=1;
	int a=1;
	int sum=0;
	for (n=60; 1; n+=60){
		sum = 0;
		for ((a=11); (a<20); (a+=1)){
			if ((n%a)==0){
				sum+=1;
			} 
			else{
				break;
			}
		}
		if (sum==9){
			break;
		}
	}
	printf("%i\n", n );
	return 0;
}