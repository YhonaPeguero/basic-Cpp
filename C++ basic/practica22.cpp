#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float altura;
	float asterisco;
	float asterisco_linea;
	float espacio;
	float espacio_linea;
	float linea;
	cin >> altura;
	asterisco = altura;
	espacio = 0;
	for (linea=1;linea<=altura;linea++) {
		for (espacio_linea=0;espacio_linea<=espacio;espacio_linea++) {
			cout << " ";
		}
		for (asterisco_linea=1;asterisco_linea<=asterisco;asterisco_linea++) {
			cout << "*";
		}
		asterisco = asterisco-1;
		espacio = espacio+1;
		cout << " " << endl;
	}
	return 0;
}

