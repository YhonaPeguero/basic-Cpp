// Este codigo ha sido generado por el modulo psexport 20150822-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float cant_cerveza;
	float cant_jamon;
	float cant_refresco;
	float cerveza;
	float jamon;
	float refresco;
	float total;
	jamon = 1.5;
	refresco = 1.05;
	cerveza = 0.75;
	total = 0;
	cout << "Introduce la cantidad de bocadillos de jamon" << endl;
	cin >> cant_jamon;
	cout << "Introduce la cantidad de refresco" << endl;
	cin >> cant_refresco;
	cout << "Introduce la cantidad de cerveza" << endl;
	cin >> cant_cerveza;
	total = ((cant_jamon*jamon)+(cant_refresco*refresco)+(cant_cerveza*cerveza));
	cout << total << endl;
	return 0;
}

