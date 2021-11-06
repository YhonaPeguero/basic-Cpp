#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	int numero_ninas;
	int numero_ninos;
	int porcentaje_ninas;
	int porcentaje_ninos;
	cout << "Introduce el numero de niños" << endl;
	cin >> numero_ninos;
	cout << "Introduce el numero de niñas" << endl;
	cin >> numero_ninas;
	porcentaje_ninos = numero_ninos*100/(numero_ninos+numero_ninas);
	porcentaje_ninas = 100-porcentaje_ninos;
	cout << "Hay un " << porcentaje_ninos << " % de niños" << endl;
	cout << "Hay un " << porcentaje_ninas << " % de niñas" << endl;
	return 0;
}

