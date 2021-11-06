#include<iostream>
#include<ctime>
using namespace std;

void esperar(double t);



int main() {
	float horas;
	float minutos;
	float segundos;
	// Variables
	horas = 0;
	minutos = 0;
	segundos = 0;
	// Bucle infinito
	while (true) {
		// Mostrar, si es menor de 10 escribira un 0 antes
		if (horas<10) {
			cout << "0";
		}
		cout << horas << ":";
		if (minutos<10) {
			cout << "0";
		}
		cout << minutos << ":";
		if (segundos<10) {
			cout << "0";
		}
		cout << segundos << endl;
		// Aumentar en un segundo
		segundos = segundos+1;
		// Comprobar el tiempo
		if (segundos==60) {
			// Un minuto mas
			minutos = minutos+1;
			// Reiniciamos los segundos
			segundos = 0;
			if (minutos==60) {
				// Una hora mas
				horas = horas+1;
				// Reiniciamos los minutos
				minutos = 0;
				if (horas==24) {
					// Reiniciamos las horas
					horas = 0;
				}
			}
		}
		esperar(1*1000);
	}
	return 0;
}


void esperar(double t) {
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}

