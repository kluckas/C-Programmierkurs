#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int sum=0;
	for ((i=1); (i<=15); (i+=2)){
		sum+=i;
	}
	printf("%i\n", sum);
	return 0;
}

