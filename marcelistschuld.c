#include <stdio.h>
#include <gmp.h>

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
int kgV(int a, int b){
	int kgv = a/ggT(a,b);
	kgv=b*kgv;
	return kgv;
}

int main(){
	int n=1;
	mpz_t kgv;
	mpz_init(kgv);
	mpz_set_ui(kgv, kgV(2,3));
	for (n=4;n<=30; n++){
		mpz_set_ui(kgv, kgV(kgv,n));
	}
	gmp_printf("%Zd\n", kgv);
	return 0;
}