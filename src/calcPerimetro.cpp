#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "calcPerimetro.h"
#include "perimetro.h"

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um triangulo
*@equilatero e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@return void
*/
void calcPerimetroTrianguloEquilatero(float *b) {
	cout << "Perimetro do triangulo: " << perimetroTrianguloEquilatero(b) << endl;
}

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um retangulo
*@e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta para o valor da altura
*@return void
*/
void calcPerimetroRetangulo(float *b, float *h) {
	cout << "Perimetro do retangulo: " << perimetroRetangulo(b, h) << endl;
}


/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da perimetro
*@de um quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado
*@return void
*/
void calcPerimetroQuadrado(float *l){
	cout << "Perimetro do quadrado: " << perimetroQuadrado(l) << endl;
}

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um circulo
*@e apresenta o resultado na tela
*@param *r ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcPerimetroCirculo(float *r) {
	cout << "Perimetro do circulo: " << perimetroCirculo(r) << endl;
}