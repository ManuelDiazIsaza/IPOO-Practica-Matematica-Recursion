/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-11
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

//Utilidad: Programa para demostrar funcionamiento de estructuras de control


#include <iostream>
#include "Matematica.h";



int main() {
	int decimal = 15;
	int tabla = 9;
	int fac = 3;
	int base = 6;
	int exponente = 4;
	int num1 = 5;
	int num2 = 6;
	int angulo = 90;
	Matematica matematica;
/*	cout << endl << "El numero " << decimal <<"(10)" << " Corresponde a " << matematica.convertirDeciamalABInario(decimal) << "(2)" << endl << endl;
	cout << endl << "Factorial de : " << fac << " es : " << matematica.factorial(5) << endl;
	cout << endl << matematica.tablaDeMultiplicar(tabla);
	cout << endl << num1 << " * " << num2 << " es : " << matematica.producto(num1,num2);
	cout << endl << base << " ^ " << exponente << " es : " << matematica.potenciaVersion1(base,exponente);
	cout << endl << base << " ^ " << exponente << " es : " << matematica.potenciaVersion2(6,4);
	cout << endl <<  "Seno ( " << angulo << " ) es : " << matematica.seno(angulo);*/
	
//	matematica.listaDeNumeros(num1);
//    cout << endl << matematica.factorial2(5);
    cout << matematica.decimalBinario(523);
    cout << endl << matematica.serieFibonacci(23);
	//cout << "La suma es :" << matematica.sumaDeNumeros(fac);
	//cout << endl << "Factorial de " << fac << " es " << matematica.factorial2(fac);
	return 0;
}

