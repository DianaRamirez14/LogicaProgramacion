
if __name__ == '__main__':
	creditopre = int()
	creditopos = int()
	mul = int()
	creditopre = 50000
	creditopos = 300000
	promedio = float()
	des = float()
	curso = str()
	print("Bienvenido, con los siguientes datos que le vamos a pedir, usted podra tener o no descuentos en sus proximos semestres.")
	print("¿Usted esta cursando un pregrado o un posgrado?(Por favor, digitelo todo en minuscula y sin espacios)")
	curso = input()
	print("Que promedio saco en el ultimo semestre. (Por favor, dijitelo con un punto en vez de coma)")
	promedio = float(input())
	if curso=="pregrado":
		if promedio>=4.5:
			mul = creditopre*28
			des = mul-(mul*0.25)
			print("Cursara 28 creditos, que seria ",mul," y se le hara un 25% de descuento. En total tendra que pagar ",des)
		else:
			if promedio>=4.0 and promedio<4.5:
				mul = creditopre*25
				des = mul-(mul*0.10)
				print("Cursara 25 creditos, que seria ",mul," y se le hara un 10% de descuento. En total tendra que pagar ",des)
			else:
				if promedio>=3.5 and promedio<4.0:
					mul = creditopre*20
					print("Cursara 20 creditos, que seria ",mul," y no se le hara ningun descuento")
				else:
					if promedio>=2.5 and promedio<3.5:
						mul = creditopre*15
						print("Cursara 15 creditos, que seria ",mul," y no se le hara ningun descuento")
					else:
						print("No podra matricularse")
	else:
		if curso=="posgrado":
			if promedio>=4.5:
				mul = creditopos*20
				des = mul-(mul*0.20)
				print("Cursara 20 creditos, que seria ",mul," y se le hara un 20% de descuento. En total tendra que pagar ",des)
			else:
				mul = creditopos*10
				print("Cursara 10 creditos, que seria ",mul," y no se le hara ningun descuento")
		else:
			print("No escribio correctamente")

