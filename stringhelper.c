#include "stringhelper.h"

int str_len(char s1[]){
	int n;
	for (n=0; s1[n] != '\0'; n++);
	return n;
}

int str_cmp( char s1[], char s2[]){
	int n;
	for (n=0; ((s1[n] != '\0')&&(s2[n] != '\0')); n++){
		if (s1[n] != s2[n]){return 1;}
	}
	return 0;
}

char * str_cpy(char *d, char *s){
	int n;
	for (n=0;s[n]!='\0';n++){d[n]=s[n];}
	d[n]=s[n];
	return d; 
}

char * str_cat(char s1[], char s2[]){
	int n,k;
	for (n=0;s1[n]!='\0';n++);
	for (k=0;s2[k]!='\0';k++){s1[n]=s2[k];n++;}
	s1[n]='\0';
	return s1;
}