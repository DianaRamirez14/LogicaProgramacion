// Elaborar un algoritmo que entre el nombre de un empleado, su salario basico por hora y el numero de horas trabajadas en el mes; escriba su nombre y salario mensual si este es mayor de 450.000, de lo contrario escriba solo el nombre.


import java.io.*;

public class Salario {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int hor;
		int mul;
		String nom;
		int sal;
		System.out.println("Buenos dias, escriba su nombre por favor: ");
		nom = bufEntrada.readLine();
		System.out.println("Escriba el salario basico por hora que recibe: ");
		sal = Integer.parseInt(bufEntrada.readLine());
		System.out.println("Escriba sus horas trabajadas en el mes: ");
		hor = Integer.parseInt(bufEntrada.readLine());
		mul = sal*hor;
		if (mul>=450000) {
			System.out.println("Señor@ "+nom+", su salario mensual es "+mul);
		} else {
			System.out.println(nom);
		}
	}


}

