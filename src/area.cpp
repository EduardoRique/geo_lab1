/** 
*@file area.cpp
*@brief Arquivo de corpo contendo a implentacao de funcoes que realizam os 
*		calculos para determinar areas e retornam valores para outras
*		funcoes, para serem apresentados na tela
*@author Luís Eduardo RIque
*@author Ygor Almeida
*@since 09/03/2017
*@date  11/03/2017
*/

#include "area.h"

/**
*@brief Funcao que calcula a area de um trinagulo equilatero
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base/lado
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area do triangulo
*/
float areaTrianguloEquilatero(float *pntB, float *pntH) {
	return (*pntB * *pntH)/2;
}

/**
*@brief Funcao que calcula a area de um retangulo
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base/lado
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area do retangulo
*/
float areaRetangulo(float *pntB, float *pntH) {
	return (*pntB * *pntH);
}

/**
*@brief Funcao que calcula a area de um quadrado
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado
*@return valor da area do quadrado
*/
float areaQuadrado(float *pntL) {
	return (*pntL * *pntL);
}

/**
*@brief Funcao que calcula a area de um circulo
*@param *pntR ponteiro tipo float que aponta para o apontador do valor do raio
*@return valor da area do circulo
*/
float areaCirculo(float *pntR) {
	return (*pntR * 3.14159 * *pntR);
}

/**
*@brief Funcao que calcula a area de uma piramide de base quadrangular
*@param *pntB1 ponteiro tipo float que aponta para o apontador do valor da base
*@param *pntB2 ponteiro tipo float que aponta para o apontador do valor da base do triangulo
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area da piramide
*/
float areaPiramide(float *pntB1, float *pntB2, float *pntH) {
	return (areaQuadrado(pntB1) + 4 * areaTrianguloEquilatero(pntB2, pntH));
}

/**
*@brief Funcao que calcula a area de um cubo
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado do cubo
*@return valor da area do cubo
*/
float areaCubo(float *pntL) {
	return (6 *(*pntL * *pntL));
}

/**
*@brief Funcao que calcula a area de um paralelepipedo
*@param *pntH ponteiro do tipo float que aponta para o apontador do valor da altura
*@param *pntC ponteiro do tipo float que aponta para o apontador do valor do comprimento
*@param *pntL ponteiro tipo float que aponta para o apontador do valor da largura
*@return valor da area do paralelepipedo
*/
float areaParalelepipedo(float *pntH, float *pntC, float *pntL) {
	return ((2 * *pntH * *pntC) + (2 * *pntH * *pntL) + (2 * *pntC * *pntL));
}

/**
*@brief Funcao que calcula a area de uma esfera
*@param *pntR ponteiro tipo float que aponta para o apontador do valor do raio
*@return valor da area da esfera
*/
float areaEsfera(float *pntR) {
	return (4 * 3.14159 * *pntR * *pntR);
}


