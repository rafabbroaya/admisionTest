/*
 * g_ArreglosMultidimensionales.c
 *
 *  Created on: 9 ago. 2016
 *      Author: RSG
 */
#include <stdio.h>
#include <stdlib.h>

#define N 100
#define m 10
#define n 10

void printArray(int array[], int size);
void bubbleSort(int array[], int size);
void arreglosMultidimencionales(void);
void promedio(int arrayM[], int n1);

int main(int argc, char **argv) {
	int i;
	int array1[N] = { 0 };
	for (i = 0; i < N; i++) {
		array1[i] = rand() % N;
	}

	printf("\nArreglo Desordenado:\n");
	printArray(array1, N);
	bubbleSort(array1, N);
	printf("\nArreglo Ordenado:\n");
	printArray(array1, N);

	arreglosMultidimencionales();
}

void printArray(int array[], int size) {
	int i = 0;
	for (; i < size;) {
		printf("%d ", array[i]);
		i++;
	}
}

void bubbleSort(int array[], int size) {
	int i;
	int j;
	int temporal;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1]) {
				temporal = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporal;
			}
		}
	}
}

void arreglosMultidimencionales(void) {
	int array[m][n] = { { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, { 0, 1, 2, 3, 4, 5, 6, 7,
			8, 9 }, { 0, 0, 1, 2, 3, 4, 5, 6, 7, 8 }, { 0, 0, 0, 1, 2, 3, 4, 5,
			6, 7 }, { 0, 0, 0, 0, 1, 2, 3, 4, 5, 6 }, { 0, 0, 0, 0, 0, 1, 2, 3,
			4, 5 }, { 0, 0, 0, 0, 0, 0, 1, 2, 3, 4 }, { 0, 0, 0, 0, 0, 0, 0, 1,
			2, 3 }, { 0, 0, 0, 0, 0, 0, 0, 0, 1, 2 } };
	printf("\n\nARREGLOS MULTIDIMENSIONALES\n");
	int i, j;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (i == j || i > j)
				array[i][j] = 1;
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	promedio(array[3], m);
}

void promedio(int arrayM[], int m1) {
	int i;
	for (i = 0; i < m1; i++) {
		printf("%d ", arrayM[i]);
	}
}
