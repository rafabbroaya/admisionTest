/*
 * i_Estructuras.c
 *
 *  Created on: 10 ago. 2016
 *      Author: RSG
 */
#include <stdio.h>

struct cartas {
	char *cara;
	char *palo;
};

typedef struct cartas Carta;

int main(int argc, char **argv) {
	struct cartas unaCarta;
	struct cartas *ptrCarta;

	unaCarta.cara = "As";
	unaCarta.palo = "Espadas";

	ptrCarta = &unaCarta;

	printf("%s %s", unaCarta.cara, ptrCarta->palo);

	Carta mazo[52];
}

