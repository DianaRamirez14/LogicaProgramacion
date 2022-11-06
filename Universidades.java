
import java.io.*;

public class Universidades {

	public static void main(String args[]) throws IOException {
		BufferedReader bufEntrada = new BufferedReader(new InputStreamReader(System.in));
		int creditopos;
		int creditopre;
		String curso;
		double des;
		int mul;
		double promedio;
		creditopre = 50000;
		creditopos = 300000;
		System.out.println("Bienvenido, con los siguientes datos que le vamos a pedir, usted podra tener o no descuentos en sus proximos semestres.");
		System.out.println("¿Usted esta cursando un pregrado o un posgrado?(Por favor, digitelo todo en minuscula y sin espacios)");
		curso = bufEntrada.readLine();
		System.out.println("Que promedio saco en el ultimo semestre. (Por favor, dijitelo con un punto en vez de coma)");
		promedio = Double.parseDouble(bufEntrada.readLine());
		if (curso.equals("pregrado")) {
			if (promedio>=4.5) {
				mul = creditopre*28;
				des = mul-(mul*0.25);
				System.out.println("Cursara 28 creditos, que seria "+mul+" y se le hara un 25% de descuento. En total tendra que pagar "+des);
			} else {
				if (promedio>=4.0 && promedio<4.5) {
					mul = creditopre*25;
					des = mul-(mul*0.10);
					System.out.println("Cursara 25 creditos, que seria "+mul+" y se le hara un 10% de descuento. En total tendra que pagar "+des);
				} else {
					if (promedio>=3.5 && promedio<4.0) {
						mul = creditopre*20;
						System.out.println("Cursara 20 creditos, que seria "+mul+" y no se le hara ningun descuento");
					} else {
						if (promedio>=2.5 && promedio<3.5) {
							mul = creditopre*15;
							System.out.println("Cursara 15 creditos, que seria "+mul+" y no se le hara ningun descuento");
						} else {
							System.out.println("No podra matricularse");
						}
					}
				}
			}
		} else {
			if (curso.equals("posgrado")) {
				if (promedio>=4.5) {
					mul = creditopos*20;
					des = mul-(mul*0.20);
					System.out.println("Cursara 20 creditos, que seria "+mul+" y se le hara un 20% de descuento. En total tendra que pagar "+des);
				} else {
					mul = creditopos*10;
					System.out.println("Cursara 10 creditos, que seria "+mul+" y no se le hara ningun descuento");
				}
			} else {
				System.out.println("No escribio correctamente");
			}
		}
	}


}

