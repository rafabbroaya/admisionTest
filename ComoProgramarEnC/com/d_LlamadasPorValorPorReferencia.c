/*
 * d_LlamadasPorValorPorReferencia.c
 *
 *  Created on: 10 ago. 2016
 *      Author: rsanchez
 */

#include <stdio.h>

//prototypes
int cuboPorValor(int n);
void cuboPorReferencia(int *ptrN);

int main(int argc, char **argv) {
	int numero;
	printf("Ingrese un valor:\n");
	scanf("%d", &numero);
	printf("valor %d", numero);
	//Llamada por valor
	numero = cuboPorValor(numero);
	printf("\nEl cubo es: %d:", numero);

	//Llamada por referencia
	cuboPorReferencia(&numero);
	printf("\nEl cubo es: %d:", numero);

	return 0;
}

int cuboPorValor(int n) {
	return n * n * n;
}

void cuboPorReferencia(int *ptrN) {
	*ptrN = *ptrN * *ptrN * *ptrN;
}

