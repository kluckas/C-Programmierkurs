#include "arrayhelpers.h"

void print_array_linewise(int array[], int length){
	int n;
	for (n=0;n<length;n++){
		printf("%i\n",array[n]);
	}
}

void print_array_comma(int array[], int length){
	int n;
	for (n=0;n<length-1;n++){
		printf("%i, ",array[n]);
	}
	printf("%i\n", array[(length-1)]);
}


void sort_array(int array[], int length){
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

void array_init(int array[], int length, int value){
	int n;
	for (n=0;n<length;n++){
		array[n]=value;
	}
}

void array_init_naturals(int array[], int length){
	int n;
	for (n=0;n<length;n++){
		array[n]=n;
	}
}

void rotate_array(int array[], int temporary[], int length, int index){
	int n, temp, k;
	for (n=0; n<length; n++){
		temp = array[n];
		k=((n+index)%length);
		temporary[k]=temp;
	}
	for (n=0; n<length; n++){
		array[n]=(temporary[n]);
	}
}

void invert_array(int array[], int temp[], int length){
	int n;
	for (n=0; n<length; n++){
		temp[(length-n-1)%length] = array[n];
	}
	for (n=0; n<length; n++){
		array[n]=temp[n];
	}
}

int find_array(int array[], int wanted[], int lena, int lenw){
	int n,k,counterw=0;
	for (n=0; n<lena-lenw+1; n++){
		counterw=0;
		if (array[n]==wanted[0]){
			counterw=1;
			for (k=1;  k<lenw; k++){
				if (array[n+k]==wanted[k]){
					counterw++;
				}
				else {
					break;
				}
				if (counterw == lenw){
					return n;
				}
			}
		}
	}
	return (-1);
}

int sum_array(int array[], int length){
	int n, out=0;
	for (n=0;n<length;n++){
		out+=array[n];
	}
	return out;
}

unsigned int sum_quadratic_array(int array[], int length){
	int n;
	unsigned int out=0;
	for (n=0;n<length;n++){
		out+=(array[n]*array[n]);
	}
	return out;
}

int is_permutation(int array[], int length){
	int value,sum;
	unsigned int square_sum,value_square;
	sum = (length-1)*(length/2.0);
	square_sum=((1/6.)*length*(length-1)*((2*length)-1))+1;
	value_square=sum_quadratic_array(array, length);
	value=sum_array(array, length);
	if ((value==sum)&&(square_sum==value_square)){return 1;}
	return 0;
}