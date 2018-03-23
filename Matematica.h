/*
  Archivo: Matematica.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Matematica
// Responsabilidad: Calcular funciones matematicas
// ColaboraciÃ³n: ninguna

#ifndef MATEMATICA_H
#define MATEMATICA_H

#include <string>

using namespace std;

class Matematica
{
	
	public:
		Matematica();
		~Matematica();
		string convertirDeciamalABInario(int decimal);
		string tablaDeMultiplicar(int num);
		string concatenar(string const& tabla, int i , int resultado, int num);
		int factorial(int num);
		int producto(int num1, int num2);
		int potenciaVersion1(int base, int exponente);
		int potenciaVersion2(int base, int exponente);
		long double seno(int angulo);
		int factorial2(int num);
		void listaDeNumeros(int num);
		int sumaDeNumeros(int num);
        string decimalBinario(int num);
        int numeroFibonacci(int pos);
        string serieFibonacci(int pos);
	protected:

};

#endif