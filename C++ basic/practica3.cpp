#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	int numero1;
    int numero2;
	cout << "Introduce el primero numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	if ((numero1>=numero2)) {
		if ((numero1==numero2)) {
			cout << "Los numeros" << numero1 << " " << numero1 << " son iguales " << endl;
		} else {
			cout << numero1 << "es el mayor de los dos" << endl;
		}
	} else {
		cout << numero2 << "es el mayor de los dos" << endl;
	}
	return 0;
}

