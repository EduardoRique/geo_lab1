/** 
*@file calcVolume.h
*@brief Arquivo de corpo contendo a implentacao de funcoes que apresentam 
*		os resultados dos calculos de volume na tela e realizam a passagem 
*		de parametros, para funcoes que farao os calculos
*@author Luís Eduardo RIque
*@author Ygor Almeida
*@since 09/03/2017
*@date  11/03/2017
*/

#ifndef CALCVOLUME_H
#define CALCVOLUME_H

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de uma
*@piramide e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta para o valor da altura
*@return void
*/
void calcVolumePiramide(float *b, float *h);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de um 
*@cubo e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado do cubo
*@return void
*/
void calcVolumeCubo(float *l);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de um 
*@paralelepipedo e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor da alura
*@param *c ponteiro do tipo float que aponta para o valor do comprimento
*@param *l ponteiro do tipo float que aponta para o valor da largura
*@return void
*/
void calcVolumeParalelepipedo(float *h, float *c, float *l);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de uma
*@esfera e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor do raio
@return void
*/
void calcVolumeEsfera(float *r);

#endif