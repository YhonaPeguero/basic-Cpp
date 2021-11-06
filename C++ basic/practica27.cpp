#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float alumnos;
	float i;
	float nota;
	float nota_practica;
	float nota_teorica;
	do {
		cout << "Escribe el numero de alumnos" << endl;
		cin >> alumnos;
		if (alumnos<1) {
			cout << "Debe ser mayor o igual que 1" << endl;
		}
	} while (alumnos<=0);
	nota_teorica = 0;
	nota_practica = 0;
	nota = 0;
	for (i=1;i<=alumnos;i++) {
		do {
			cout << "Introduce la nota teorica del alumno " << i << endl;
			cin >> nota_teorica;
			if (!(nota_teorica>=0 && nota_teorica<=10)) {
				cout << "Debes escribir un valor entre 0 y 10" << endl;
			}
		} while (!(nota_teorica>=0 && nota_teorica<=10));
		do {
			cout << "Introduce la nota practica del alumno " << i << endl;
			cin >> nota_practica;
			if (!(nota_practica>=0 && nota_practica<=10)) {
				cout << "Debes escribir un valor entre 0 y 10" << endl;
			}
		} while (!(nota_practica>=0 && nota_practica<=10));
		nota = (nota_teorica*0.6)+(nota_practica*0.4);
		cout << "El alumno numero " << i << " ha sacado una nota de " << nota << endl;
	}
	return 0;
}

