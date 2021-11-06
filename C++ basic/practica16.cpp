#include<iostream>
using namespace std;

int main() {
	bool acierto;
	string clave;
	float contador;
	contador = 0;
	acierto = false;
	while ((contador<3 && acierto==false)) {
		cout << "introduce la clave" << endl;
		cin >> clave;
		if ((clave=="eureka")) {
			cout << "la clave es correcta" << endl;
			acierto = true;
		}
		contador = contador+1;
	}
	if ((contador==3 && acierto==false)) {
		cout << "Ya no tienes mas intentos" << endl;
	}
	return 0;
}

