#include<iostream>

using namespace std;

int main() {
	float exponente;
	float base;
	float i;
	int resultado;
	cout << "Ingrese el numero base: " << endl;
	cin >> base;
	cout << "Ingrese el exponente: " << endl;
	cin >> exponente;
	if (exponente==0) {
		resultado = 1;
	} else {
		if (exponente>0) {
			resultado = 1;
			for (i=1;i<=exponente;i++) {
				resultado = resultado*base;
			}
		} else {
			resultado = 1;
			for (i=1;i<=(exponente);i++) {
				resultado = resultado*base;
			}
			resultado = 1/resultado;
		}
	}
	cout << "El resultado es: " << resultado << endl;
	return 0;
}

