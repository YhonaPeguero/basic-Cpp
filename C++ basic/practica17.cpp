#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float contador;
	float maximo;
	float media;
	float minimo;
	float num;
	float suma;
	cin >> num;
	minimo = num;
	maximo = num;
	suma = 0;
	while ((num!=0)) {
		if ((num>maximo)) {
			maximo = num;
		}
		if ((num<minimo)) {
			minimo = num;
		}
		suma = suma+num;
		contador = contador+1;
		cin >> num;
	}
	media = suma/(contador);
	cout << "El maximo es " << maximo << endl;
	cout << "El minimo es " << minimo << endl;
	cout << "La media es " << media << endl;
	return 0;
}

