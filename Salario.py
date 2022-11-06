
	#Elaborar un algoritmo que entre el nombre de un empleado, su salario basico por hora y el numero de horas trabajadas en el mes; escriba su nombre y salario mensual si este es mayor de 450.000, de lo contrario escriba solo el nombre.

if __name__ == '__main__':

	nom = str()
	sal = int()
	mul = int()
	hor = int()
	print("Buenos dias, escriba su nombre por favor: ")
	nom = input()
	print("Escriba el salario basico por hora que recibe: ")
	sal = int(input())
	print("Escriba sus horas trabajadas en el mes: ")
	hor = int(input())
	mul = sal*hor
	if mul>=450000:
		print("Señor@ ",nom,", su salario mensual es ",mul)
	else:
		print(nom)

