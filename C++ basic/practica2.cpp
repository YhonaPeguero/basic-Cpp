#include<iostream>
using namespace std;
int main() {
	float numero1;
	float numero2;
	float resultado;
	cout << "Introduce el primer numero" << endl;
	cin >> numero1;
	cout << "Introduce el segundo numero" << endl;
	cin >> numero2;
	resultado = 0;
	resultado = numero1+numero2;
	cout << resultado << endl;
	resultado = numero1-numero2;
	cout << resultado << endl;
	resultado = numero1*numero2;
	cout << resultado << endl;
	resultado = numero1/numero2;
	cout << resultado << endl;
	return 0;
}

