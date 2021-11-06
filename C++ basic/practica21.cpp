#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float asterisco;
	float espacio;
	float lado;
	cin >> lado;
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	cout << " " << endl;
	for (asterisco=1;asterisco<=lado-2;asterisco++) {
		cout << "*";
		for (espacio=1;espacio<=lado-2;espacio++) {
			cout << " ";
		}
		cout << "*";
		cout << " " << endl;
	}
	for (asterisco=1;asterisco<=lado;asterisco++) {
		cout << "*";
	}
	return 0;
}

