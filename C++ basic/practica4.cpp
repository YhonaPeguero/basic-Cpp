#include<iostream>
using namespace std;
#define SIN_TIPO string

int main() {
	int numero1;
	int numero2;
	int numero3;
	cout << "Introduce el primer numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	cout << "Introduce el tercer numero" << endl;
	cin >> numero3;
	if ((numero1>numero2 && numero1>numero3)) {
		cout << "El numero" << numero1 << "es el mayor" << endl;
	} else {
		if ((numero2>numero3)) {
			cout << "El numero" << numero2 << "es el mayor" << endl;
		} else {
			cout << "El numero" << numero3 << "es el mayor" << endl;
		}
	}
	return 0;
}

