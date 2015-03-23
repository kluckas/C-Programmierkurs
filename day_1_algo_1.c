#include <stdio.h>
#include <math.h>

int main() {
	int c;
	int boolean=1;
	int n=2;
	printf("Please give a natural number.\n");
	scanf("%i", &c);
	while (n <= sqrt(c)){
		if ((c%n) != 0)
			boolean=1;
		else {
			boolean=0;
			break;
		}
		n++;
	}
	if (boolean==1) {
		printf("c is prime\n");
	}
	else {
		printf("c is not prime it has the divisor ");
		printf("%i\n", n);
	}
	return 0;
}
