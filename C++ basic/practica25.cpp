#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int a;
	int b;
	int c;
	int neg;
	int raizcua;
	int totalx1;
	int totalx2;
	cout << "escibe el valor de a" << endl;
	cin >> a;
	cout << "escibe el valor de b" << endl;
	cin >> b;
	cout << "escibe el valor de c" << endl;
	cin >> c;
	neg = -b;
	raizcua = pow((pow(b,2)-4*a*c),0.5);
	if (raizcua<=0) {
		cout << "La ecuacion no se puede resolver" << endl;
	} else {
		totalx1 = (neg+raizcua)/(2*a);
		totalx2 = (neg-raizcua)/(2*a);
		cout << totalx1 << endl;
		cout << totalx2 << endl;
	}
	return 0;
}

