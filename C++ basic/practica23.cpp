#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int ano;
	cout << "Introduce un ano" << endl;
	cin >> ano;
	if ((ano%4==0 && ano%100!=0)) {
		cout << "El ano " << ano << " es bisiesto" << endl;
	} else {
		if ((ano%400==0 && ano%100==0)) {
			cout << "El ano " << ano << " es bisiesto" << endl;
		} else {
			cout << "El ano " << ano << " no es bisiesto" << endl;
		}
	}
	return 0;
}

