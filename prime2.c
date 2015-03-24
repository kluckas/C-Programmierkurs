#include <stdio.h>
#include <math.h>

int main(){
	int c=11;
	int boolean=0;
	int n=2;
	while (n<sqrt(c)){
		if (!(c%n)) {
			boolean=1;
			break;
		}
		n++;
	}
	if (boolean==0){
		printf("pos\n");
	}
	else{
		printf("neg\n");
	}
	return 0;
}