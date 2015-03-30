#ifndef _MY_MATH_H_ 
#define _MY_MATH_H_
int is_prime(int); /*tests if a given integer is prime */
int GCD(int, int); /*finds the greatest common divisor of two given integers*/
double square_root(double); /*calculates the squareroot of a given double*/
int sum_odds(int); /*sums up all odd natural numbers until the given integer*/
int sum_multiples(int,int,int);/*sums up all multiples of the first two given integers until the third*/
int SCM(int, int);  /*finds the smallest common multiple of all natural numbers until the given integer*/
double _cos(double); /*simple algorithm using the Taylor series of the cosine*/
double _power(double,int); /*calculates the value of double to the power of integer using the square-and-multiply-method*/
double naiv_power(double, int); /* brute force algorithm for the power function*/
double _power_wo_r(double, int); /*same as power without recursion*/
double _expo(double); /*calculates the exponential function of a given double*/
double _natural_logarithm(double);
double _logarithmic_power(double, double); /*calculates the same as the other power-functions using the _expo and _natural_logarithm */
#endif