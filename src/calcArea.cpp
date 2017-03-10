#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "calcArea.h"
#include "area.h"

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@trinagulo equilatero e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta par o valor da altura
*@return void
*/
void calcAreaTrianguloEquilatero(float *b, float *h) {		

	cout << endl;
	cout << "Area do triangulo: " << areaTrianguloEquilatero(b, h) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado
*@return void
*/
void calcAreaQuadrado(float *l) {

	cout << endl;
	cout << "Area do quadrado: " << areaQuadrado(l) << endl;
}