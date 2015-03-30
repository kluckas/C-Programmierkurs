#include <stdio.h>
#include "mymath.h"

void square_to(double *p){
	*p*=*p;
}

void root_to(double *p){
	*p=square_root(*p);
}

int main(){
	double a=2,b=4,*pa,*pb;
	pa = &a;
	pb = &b;
	square_to(pa);
	root_to(pb);
	printf("%f\n",a);
	printf("%f\n",b);
	return 0;
}