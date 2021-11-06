#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float contador;
	float n;
	float suma;
	cin >> n;
	suma = 0;
	for (contador=1;contador<=5;contador++) {
		suma = n+suma;
		n = n+1;
	}
	cout << suma << endl;
	return 0;
}

