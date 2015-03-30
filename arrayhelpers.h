#ifndef _ARRAYHELPERS_H_
#define _ARRAYHELPERS_H_
#include <stdio.h>
void print_array_linewise(int *, int);
void print_array_comma(int *, int);
void sort_array(int *, int);
void array_init(int *, int, int);
void array_init_naturals(int *, int);
void rotate_array(int *, int *, int, int);
void invert_array(int *, int *, int);
int find_array(int *, int *,int ,int);
int sum_array(int *, int);
unsigned int sum_quadratic_array(int *, int);
int is_permutation(int*, int);
#endif