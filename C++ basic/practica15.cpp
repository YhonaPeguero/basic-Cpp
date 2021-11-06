#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float contador;
	float num;
	float suma;
	cin >> num;
	suma = 0;
	contador = 1;
	while ((num!=-1)) {
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	cout << suma/(contador-1) << endl;
	return 0;
}

