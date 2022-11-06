// Elaborar un algoritmo que entre el nombre de un empleado, su salario basico por hora y el numero de horas trabajadas en el mes; escriba su nombre y salario mensual si este es mayor de 450.000, de lo contrario escriba solo el nombre.


#include<iostream>
using namespace std;

int main() {
	float hor;
	int mul;
	string nom;
	int sal;
	
	cout << "Buenos dias, escriba su nombre por favor: " << endl;
	cin >> nom;
	cout << "Escriba el salario basico por hora que recibe: " << endl;
	cin >> sal;
	cout << "Escriba sus horas trabajadas en el mes: " << endl;
	cin >> hor;
	mul = sal*hor;
	if (mul>=450000) {
		cout << "Señor@ " << nom << ", su salario mensual es " << mul << endl;
	} else {
		cout << nom << endl;
	}
	return 0;
}

