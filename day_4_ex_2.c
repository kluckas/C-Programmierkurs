#include <stdio.h>



void _self_sort(int array[], int length){
	int n,k,temp;
	for (n=0;n<=length;n++){
		for (k=0;k<=length;k++){
			if (n==k){
				continue;
			}else if (array[n]<=array[k]){
				temp=array[k];
				array[k]=array[n];
				array[n]=temp;
			}else{
				continue;
			}
		}
	}
}

int main(){
	int d[4]={5,3,4,1};
	int n;
	_self_sort(d,3);
	for (n=0;n<=3;n++){
		printf("%i\n",d[n]);
	}
	return 0;
}