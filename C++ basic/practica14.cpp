#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int contador;
	int limite;
	int n;
	int suma;
	cin >> n;
	contador = 0;
	limite = n;
	while ((contador<limite)) {
		if ((n%2==0)) {
			suma = n+suma;
			contador = contador+1;
		}
		n = n+1;
	}
	cout << suma << endl;
	return 0;
}

