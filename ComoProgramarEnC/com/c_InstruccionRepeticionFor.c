/*
 * c_InstruccionRepeticionFor.c
 *
 *  Created on: 8 ago. 2016
 *      Author: RSG
 */

#include <stdio.h>
#include <math.h>

void executeFor(int N);
void executeWhile(int N);
void calculaInteresCompuesto(int anios, int interes, float inversion);

int main(int argc, char **argv) {
	printf("Enter iteration's number:\n");
	int N;
	scanf("%d", &N);
	executeFor(N);
	printf("\n");
	executeWhile(N);
	printf("\n");
	calculaInteresCompuesto(10, 5, 5000.00);
	return 0;
}

void executeFor(int N) {
	int i, j;
	printf("FOR\n");
	for (i = 0, j = 10; i <= N && j >= 0; i++, --j) {
		printf("%2d %2d\n", i, j);
	}
}

void executeWhile(int N) {
	int i = 1;
	printf("WHILE\n");
	while (i <= N) {
		printf("%d\n", i);
		i++;
	}
}

void calculaInteresCompuesto(int anios, int interes, float inversion) {
	int anio;
	float a;
	printf("CALCULO INTERES COMPUESTO\n");
	printf("Anio\tMonto del deposito\n");
	for (anio = 1; anio <= anios; ++anio) {
		//a = p(1 + r)^n
		double tasa = (interes / 100.0);
		a = inversion * (pow(1.0 + tasa, anio));
		printf("%-4d\t%18.2f\n",anio, a);
	}
}

