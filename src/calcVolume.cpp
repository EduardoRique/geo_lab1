/** 
*@file calcVolume.cpp
*@brief Arquivo cabecalho contendo a definicao de funcoes que apresentam 
*		os resultados dos calculos de volume na tela e realizam a passagem 
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

#include "calcVolume.h"
#include "volume.h"

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de uma 
*		piramide de base quandrangular e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base da piramide
*@param *h ponteiro do tipo float que aponta par o valor da altura do triangulo da piramid
*@return void
*/
void calcVolumePiramide(float *b, float *h) {		

	cout << "Volume da piramide: " << volumePiramide(b, h) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de um 
*		cubo e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado do cubo
*@return void
*/
void calcVolumeCubo(float *l) {

	cout << "Volume do cubo: " << volumeCubo(l) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de um 
*		paralelepipedo e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor da alura
*@param *c ponteiro do tipo float que aponta para o valor do comprimento
*@param *l ponteiro do tipo float que aponta para o valor da largura
*@return void
*/
void calcVolumeParalelepipedo(float *h, float *c, float *l) {

	cout << "Volume do paralelepipedo: " << volumeParalelepipedo(h, c, l) << endl;
}

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de uma
*		esfera e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcVolumeEsfera(float *r) {

	cout << "Volume da esfera: " << volumeEsfera(r) << endl;
}
