// Un almacen de escritorios hace los siguientes descuentos: si el cliente compra menos de 5 unidades se le da un descuento del 10%  sobre la compra si el numero de unidades es mayor o igual a cinco pero menos de 10 se le otorga un 20%  y, si son 10 o mas se le da un 40% . Hacer un algoritmo que determine cuanto debe pagar un cliente si el valor de cada escritorio es de 800.000.

#include<iostream>
using namespace std;

int main() {
	float des1;
	float des2;
	float des3;
	int muebles;
	float multi;
	cout << "Ingrese la cantidad de muebles que va a comprar" << endl;
	cin >> muebles;
	multi = muebles*800000;
	if (muebles<5) {
		des1 = multi-(multi*0.1);
		cout << "¡Tiene un descuento del 10%!, el total de su compra es de: " << des1 << endl;
	} else {
		if (muebles>=5 && muebles<10) {
			des2 = multi-(multi*0.2);
			cout << "!Tiene un descuento del 20%!, el total de su compra es de: " << des2 << endl;
		} else {
			if (muebles>=10) {
				des3 = multi-(multi*0.4);
				cout << "!Tiene un descuento del 40%!, el total de su compra es de: " << des3 << endl;
			} else {
				cout << "No obtuvo ningun descuento en su compra" << endl;
			}
		}
	}
	return 0;
}

