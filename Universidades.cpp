
#include<iostream>
using namespace std;

int main() {
	int creditopos;
	int creditopre;
	string curso;
	float des;
	int mul;
	float promedio;
	creditopre = 50000;
	creditopos = 300000;
	cout << "Bienvenido, con los siguientes datos que le vamos a pedir, usted podra tener o no descuentos en sus proximos semestres." << endl;
	cout << "¿Usted esta cursando un pregrado o un posgrado?(Por favor, digitelo todo en minuscula y sin espacios)" << endl;
	cin >> curso;
	cout << "Que promedio saco en el ultimo semestre. (Por favor, dijitelo con un punto en vez de coma)" << endl;
	cin >> promedio;
	if (curso=="pregrado") {
		if (promedio>=4.5) {
			mul = creditopre*28;
			des = mul-(mul*0.25);
			cout << "Cursara 28 creditos, que seria " << mul << " y se le hara un 25% de descuento. En total tendra que pagar " << des << endl;
		} else {
			if (promedio>=4.0 && promedio<4.5) {
				mul = creditopre*25;
				des = mul-(mul*0.10);
				cout << "Cursara 25 creditos, que seria " << mul << " y se le hara un 10% de descuento. En total tendra que pagar " << des << endl;
			} else {
				if (promedio>=3.5 && promedio<4.0) {
					mul = creditopre*20;
					cout << "Cursara 20 creditos, que seria " << mul << " y no se le hara ningun descuento" << endl;
				} else {
					if (promedio>=2.5 && promedio<3.5) {
						mul = creditopre*15;
						cout << "Cursara 15 creditos, que seria " << mul << " y no se le hara ningun descuento" << endl;
					} else {
						cout << "No podra matricularse" << endl;
					}
				}
			}
		}
	} else {
		if (curso=="posgrado") {
			if (promedio>=4.5) {
				mul = creditopos*20;
				des = mul-(mul*0.20);
				cout << "Cursara 20 creditos, que seria " << mul << " y se le hara un 20% de descuento. En total tendra que pagar " << des << endl;
			} else {
				mul = creditopos*10;
				cout << "Cursara 10 creditos, que seria " << mul << " y no se le hara ningun descuento" << endl;
			}
		} else {
			cout << "No escribio correctamente" << endl;
		}
	}
	return 0;
}

