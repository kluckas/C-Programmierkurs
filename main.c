#include "stringhelper.h"
#include <stdio.h>

int main(){
	char p[100] = "Pepsi ";
	char c[100] = "Coca ";
	char suffix[10] = "Cola";
	char out[100];
	str_cpy(out,p);
	str_cat(out,suffix);
	str_cpy(p,out);
	str_cpy(out,c);
	str_cat(out,suffix);
	str_cpy(c,out);
	if (str_cmp(p,c)){
		printf("%s", p);
		printf(" is not ");
		printf("%s", c);
		printf("\n");
	}
	return 0;
}