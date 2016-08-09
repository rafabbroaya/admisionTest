/*
 * AritmeticaEnC.c
 *
 *  Created on: 8 ago. 2016
 *      Author: RSG
 */
#include <stdio.h>

/*
 * Operations in C:
 *
 * Addition +
 * Subtraction -
 * Multiplication *
 * Division /
 * Modulo %
 */

void precedence();

int main(int argc, char **argv) {

	printf("%i\n", 1+1);
	printf("%i\n", 1-1);
	printf("%i\n", 15*12);
	printf("%f\n", 7.0/4.0);
	printf("%i\n", 12%3);

	precedence();
}

void precedence(){
	float result = 2 + 12 % 5 -2 / 3.0 * 5.0;
	// 2 + 2 - 3.33333333
	printf("%f", result);
}

