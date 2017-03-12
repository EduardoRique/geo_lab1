/** 
*@file calcArea.cpp
*@brief Arquivo cabecalho contendo a definicao de funcoes que apresentam 
*		os resultados dos calculos de area na tela e realizam a passagem 
*		de parametros, para funcoes que farao os calculos
*@author Luís Eduardo RIque (luiseduardorique@gmail.com)
*@author Ygor Almeida (ygoralmeida@gmail.com)
*@since 09/03/2017
*@date  12/03/2017
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "calcArea.h"
#include "area.h"

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*		trinagulo equilatero e apresenta o resultado na tela
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
*		retangulo e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta par o valor da altura
*@return void
*/
void calcAreaRetangulo(float *b, float *h) {		

	cout << endl;
	cout << "Area do retangulo: " << areaRetangulo(b, h) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*		quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado do quadrado
*@return void
*/
void calcAreaQuadrado(float *l) {

	cout << endl;
	cout << "Area do quadrado: " << areaQuadrado(l) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*		circulo e apresenta o resultado na tela
*@param *r ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcAreaCirculo(float *r) {		

	cout << endl;
	cout << "Area do circulo: " << areaCirculo(r) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de uma 
*		piramide de base quandangular e apresenta o resultado na tela
*@param *b1 ponteiro do tipo float que aponta para o valor do lado da base da piramide
*@param *b2 ponteiro do tipo float que aponta para o valor lado do triangulo da piramide
*@param *h ponteiro do tipo float que aponta par o valor da altura do triangulo da piramide
*@return void
*/
void calcAreaPiramide(float *b1, float *b2, float *h) {		

	cout << endl;
	cout << "Area da piramide: " << areaPiramide(b1, b2, h) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*		cubo e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado do cubo
*@return void
*/
void calcAreaCubo(float *l) {

	cout << endl;
	cout << "Area do cubo: " << areaCubo(l) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*		paralelepipedo e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor da altura
*@param *c ponteiro do tipo float que aponta para o valor do comprimento
*@param *l ponteiro do tipo float que aponta para o valor da largura
*@return void
*/
void calcAreaParalelepipedo(float *h, float *c, float *l) {

	cout << endl;
	cout << "Area do paralelogramo: " << areaParalelepipedo(h, c, l) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de uma 
*		esfera e apresenta o resultado na tela
*@param *r ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcAreaEsfera(float *r) {		

	cout << endl;
	cout << "Area da esfera: " << areaEsfera(r) << endl;
}