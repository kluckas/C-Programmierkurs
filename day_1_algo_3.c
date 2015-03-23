#include <stdio.h>
#include <math.h>

int main() {
	float a,x=2,y=1;
	printf("Please give a number for which the squareroot should be found\n");
	scanf("%f" , &a);
	while ((fabs(x-y))>=1e-10){
		x=y;
		y=0.5*(x+(a/x));
	}
	printf("%f\n", x);
	return 0;
}
