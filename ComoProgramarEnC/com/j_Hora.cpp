/*
 * Hora.cpp
 *
 *  Created on: 15 ago. 2016
 *      Author: RSG
 */

#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

// Modeling hour object ADT (Abstract Data Type)
class Hora {

	// Class interface
public:
	// Behaviors
	Hora();
	void setHour(int, int, int);
	void printArmy();
	void printStandart();
private:
	// Attributes
	int hora;
	int minuto;
	int segundo;

};

Hora::Hora() {
	hora = minuto = segundo = 0;
}

void Hora::setHour(int h, int m, int s) {
	hora = (h >= 0 && h < 24) ? h : 0;
	minuto = (m >= 0 && m < 60) ? m : 0;
	segundo = (s >= 0 && s < 60) ? s : 0;
}

void Hora::printArmy() {
	cout << (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "")
			<< minuto;
}

void Hora::printStandart() {
	cout << ((hora == 0 || hora == 12) ? 12 : hora % 12) << ":"
			<< (minuto < 10 ? "0" : "") << minuto << ":"
			<< (segundo < 10 ? "0" : "") << segundo
			<< (hora < 12 ? " AM" : " PM");
}

// Controller
int main(int argc, char **argv) {

	Hora h;
	h.printArmy();
	printf("\n");
	h.printStandart();
	printf("\n");
	h.setHour(12, 12, 12);
	h.printArmy();
	printf("\n");
	h.printStandart();
	printf("\n");
	h.setHour(99, 99, 99);
	h.printArmy();
	printf("\n");
	h.printStandart();


	return 0;
}

