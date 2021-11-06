#include<iostream>
using namespace std;

int main() {
	float numero1;
	float numero2;
	float numero3;
	float resultado;
	cout << "Introduce el primer numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	cout << "Introduce el tercer numero" << endl;
	cin >> numero3;
	if ((numero1<0)) {
		resultado = numero1*numero2*numero3;
	} else {
		resultado = numero1+numero2+numero3;
	}
	cout << resultado << endl;
	return 0;
}

