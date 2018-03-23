/*
  Archivo: Matematica.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include "Matematica.h"
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>
#include<algorithm>
#include<cstring>

using namespace std;

//Declara la constante PI
const double PI = 3.141592653589793;

Matematica::Matematica()
{
	//Constructor
}

Matematica::~Matematica()
{
	//Método detructor
}

string Matematica::convertirDeciamalABInario(int decimal){
	int numero = decimal;
	int resto = 0;
	string binario;
	
	do{
		resto = numero % 2;
		numero = numero / 2;
		binario = (char)(resto+48) + binario;
	}while (numero >= 2);
	binario = (char)(numero + 48) + binario;
	return binario;
}

string Matematica::tablaDeMultiplicar(int num){
	int resultado;
	string tabla ="";
	tabla = "TABLA DE MULTIPLICAR \n"  ;
	for(int i = 1; i <= 15; i++){
		resultado = i * num;
		tabla = concatenar(tabla, i, resultado, num);
	}
	
	return tabla;
}

string Matematica::concatenar(string const& tabla, int i, int resultado, int num)
{
    stringstream s;
    s << tabla << i << " * "  << num << " = " << resultado<< endl;
    return s.str();
}

int Matematica::factorial(int num){
	int fac = 1;
	for(int i = 1; i<= num; i++){
		fac = fac * i;
	}
	return fac;
}

int Matematica::producto(int num1, int num2){
	int producto = 0;
	for(int i = 1; i<= num2; i++){
		producto = producto + num1;
	}
	return producto;
}

int Matematica::potenciaVersion1(int base, int exponente){
	int potencia = 1;
	for(int i = 1; i<= exponente; i++){
		potencia = potencia * base;
	}
	return potencia;
}

int Matematica::potenciaVersion2(int base, int exponente){
	int potencia = 1;
	int operador = base;
	for(int i = 1; i< exponente; i++){
	    int producto = 0;
		for(int j = 1 ; j <= base; j++){
		    producto = producto + operador;
		}
		operador = producto;
		potencia = operador;
	}
	return potencia;
}


long double Matematica::seno(int angulo){
	long double seno = 0;
	int exponente = 1;
	double radianes = angulo * PI / 180;

	for (int i = 1; i <= 15; i++){
	    if ( i % 2 == 0){
	        seno = seno - pow(radianes,exponente) / factorial(exponente);
	    } else {
	        seno = seno + pow(radianes,exponente) / factorial(exponente);
	    }
	    exponente += 2;
	}
	return seno;
}

int Matematica::factorial2(int num){
    int factorial = 0;
 
    if(num <= 1){
        factorial = 1;
    } else { 
        factorial = num * factorial2(num-1);
        
    }
    
    return factorial;
    
}

void Matematica::listaDeNumeros(int num){
    if (num == 0){
        cout << 0;
    } else {
        cout << num;
        listaDeNumeros(num-1);
    }
}


int Matematica::sumaDeNumeros(int num){
    int suma = 0;
    
    if(num == 0){
        suma = 0;
    } else {
        suma = num + sumaDeNumeros(num-1);
    }
    
    return suma;
}

string Matematica::decimalBinario(int num){
    string binario = "";

    if (num<=1)
    {
        binario += "1";
    }
    else
    {
        binario =  decimalBinario(num/2) + to_string(num%2);
    }
    return binario;
}

int Matematica::numeroFibonacci(int num){
    int fibo[num];
    if(num == 0)
    {
        fibo[num] = 0;
    }
    else if(num == 1)
    {
        fibo[num] = 1;
    }
    else
    {
        fibo[num] = numeroFibonacci(num-1) + numeroFibonacci(num-2);
    }
    return fibo[num];
}

string Matematica::serieFibonacci(int num){
    string serieFib;
    for(int i=0;i<num+1;i++)
    {
        serieFib = serieFib + " - " + to_string(numeroFibonacci(i));
    }
    return serieFib;
}




