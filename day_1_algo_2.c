#include <stdio.h>
#include <math.h>

int main() {
	int a,b;
	printf("Please enter a natural number.\n");
	scanf("%i", &a);
	printf("Please enter another natural number.\n");
	scanf("%i", &b);
	if (a==0){
		printf("%i\n", b);
		return 0;
	}
	while (b!=0){
		if (a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	printf("The gcd is ");
	printf("%i\n", a);
	return 0;
}

	
		
		
