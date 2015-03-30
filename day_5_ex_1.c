#include <stdio.h>

void swap_int(int *p, int *q){
	int temp=*p;
	*p=*q;
	*q=temp;
}

int main(){
	int a=1,b=2;
	int *pa, *pb;
	pa = &a;
	pb = &b;
	swap_int(pa,pb);
	printf("%i\n",a);
	printf("%i\n",b);
	return 0;
}