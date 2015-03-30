#include <stdio.h>

int ggT(int a, int b){
	if (a==0){
		return b;
	}
	while (b!=0){
		if (a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	return a;
}

int kgV(int x, int y){
	int kgv;
	kgv=(x/ggT(x,y));
	kgv*=y;
	return kgv;
}

int main(){
	int n,output=2;
	for (n=3; n<=20; n++){
		output=kgV(n,output);
	}
	printf("%i\n",output);
	return 0;

}
