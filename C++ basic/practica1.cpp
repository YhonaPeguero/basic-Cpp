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
	int a;
	int b;
	int c;
	cout << "Introduce el valor A" << endl;
	cin >> a;
	cout << "Introduce el valor de B" << endl;
	cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "A vale" << a << "y B vale" << b << endl;
	return 0;
}

