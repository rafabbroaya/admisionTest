/*
 * b_OperadorIncrementoDecremento.c
 *
 *  Created on: 8 ago. 2016
 *      Author: RSG
 */
#include <stdio.h>

int incrementarAntes();
int incrementarDespues();

int main(int argc, char **argv) {
	int num;
	sscanf(argv[1], "%d", &num);
	int result = 0;
	if (num > 10) {
		result = incrementarDespues(num);
	} else {
		result = incrementarAntes(num);
	}

	printf("%i\n\n", (result > 3)?result:0);

	int z = 3;
	printf("%f", 2.0 + 12 % 5 + ++z +1);
	return 0;
}

int incrementarAntes(int value) {
	printf("%i\n", ++value);
	return value;
}

int incrementarDespues(int value) {
	printf("%i\n", value++);
	return value;
}

