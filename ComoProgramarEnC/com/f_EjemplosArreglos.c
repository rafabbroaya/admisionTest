/*
 * f_EjemplosArreglos.c
 *
 *  Created on: 9 ago. 2016
 *      Author: RSG
 */
#include <stdio.h>
#include <stdlib.h>
#define TAMANIO_RESPUESTA 100
#define TAMANIO_FRECUENCIA 10
#define SALTO 10

float encuestaMethod(int encuesta[]);
void frecuenciaMethod(int encuesta[], int frecuencia[]);
void arregloCaracteres(void);
void iniciarArregloEstatico(void);

int main(int argc, char **argv) {

	//Array initialization

	//Declaration
	char arreglo1[10];
	//Initialization
	int i;
	for (i = 0; i < 10; i++) {
		arreglo1[i] = 'a';
	}

	//Declaration and initialization
	char arreglo2[] = { 'a', 'e', 'i', 'o', 'u' };

	int encuesta[TAMANIO_RESPUESTA];

	for (i = 0; i < TAMANIO_RESPUESTA; i++) {
		encuesta[i] = rand() % TAMANIO_FRECUENCIA;
	}

	float result = encuestaMethod(encuesta);
	printf("\nResultado: %8.2f\n", result / TAMANIO_RESPUESTA);

	int frecuencia[TAMANIO_FRECUENCIA] = { 0 };
	frecuenciaMethod(encuesta, frecuencia);

	for (i = 0; i < TAMANIO_FRECUENCIA; i++) {
		printf("%3d", i);
	}
	printf("\n");
	for (i = 0; i < TAMANIO_FRECUENCIA; i++) {
		printf("%3d", frecuencia[i]);
	}

	printf("\n");
	arregloCaracteres();
	printf("\n\nPrimera Pasada");
	iniciarArregloEstatico();
	printf("\n\nSegunda Pasada");
	iniciarArregloEstatico();
}

float encuestaMethod(int encuesta[]) {
	int i;
	float result;
	printf("Encuesta:\n");
	for (i = 0; i < TAMANIO_RESPUESTA; i++) {
		result += encuesta[i];
		printf("%5d", encuesta[i]);
		if ((i + 1) % SALTO == 0)
			printf("\n");
	}
	return result;
}

void frecuenciaMethod(int encuesta[], int frecuencia[]) {
	int i;
	for (i = 0; i < TAMANIO_RESPUESTA; i++) {
		++frecuencia[encuesta[i]];
	}

}

void arregloCaracteres() {
	char cadena1[] = "Rafael Sanchez";
	int i;
	for (i = 0; cadena1[i] != '\0'; i++) {
		printf("'%c' ", cadena1[i]);
	}
	printf("\n");
	char cadena2[] = { 'R', 'a', 'f', 'a', '\0' };
	printf("%s\n", cadena2);
	printf("\nEnter a string char:\n");
	char cadena3[20];
	scanf("%s", cadena3);
	printf("%s", cadena3);
}

void iniciarArregloEstatico(void) {
	static int arreglo1[3] = { 0 };
	printf("\nValores de entrada\n");
	int i;
	for (i = 0; i < 3; i++) {
		printf("arreglo1[ %d ] = %d ", i, arreglo1[i]);
	}
	printf("\nValores de salida\n");
	for (i = 0; i < 3; i++) {
		printf("arreglo1[ %d ] = %d ", i, arreglo1[i] += 5);
	}

}
