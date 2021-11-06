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
	float i;
	float n;
	float resultado;
	// validamos N
	do {
		cout << "Escribe N" << endl;
		cin >> n;
		if (n<1) {
			cout << "Debe ser mayor o igual que 1" << endl;
		}
	} while (n<=0);
	resultado = 0;
	for (i=1;i<=n;i++) {
		resultado = pow(i,2);
		cout << "El valor al cuadrado de " << i << " es de " << resultado << endl;
	}
	return 0;
}

