#include <stdio.h>
#include <math.h>

int main() {
	int n=2;
	int boolean=0;
	int i;
	for (i=20001; 1; (i+=2)){
		while (n <= sqrt(i)){
			if ((i%n) != 0){
				boolean=1;
				n++;
			}
			else{
				boolean=0;
				break;
			}
		}
		if (boolean==1){
			break;
		}
		n=2;
	}
	printf("The next primenumber after 20000 is ");
	printf("%i\n", i );
	return 0;
}
