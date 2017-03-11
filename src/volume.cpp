/** 
*@file volume.cpp
*@brief Arquivo de corpo contendo a implentacao de funcoes que realizam os 
*		calculos para determinar volumes e retornam valores para outras
*		funcoes, para serem apresentados na tela
*@author Luís Eduardo RIque
*@author Ygor Almeida
*@since 09/03/2017
*@date  11/03/2017
*/

#include "volume.h"

/**
*@brief Funcao que calcula o volume de uma piramide de base quadrangular
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor do volume da piramide
*/
float volumePiramide(float *pntB, float *pntH) {
	return (*pntB * *pntB * *pntH)/3;
}

/**
*@brief Funcao que calcula o volume de um cubo
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado do cubo
*@return valor do volume do cubo
*/
float volumeCubo(float *pntL) {
	return (*pntL * *pntL * *pntL);
}

/**
*@brief Funcao que calcula o volume de um paralelepipedo
*@param *pntH ponteiro do tipo float que aponta para o apontador do valor da altura
*@param *pntC ponteiro do tipo float que aponta para o apontador do valor do comprimento
*@param *pntL ponteiro tipo float que aponta para o apontador do valor da largura
*@return valor do volume do paralelepipedo
*/
float volumeParalelepipedo(float *pntH, float *pntC, float *pntL) {
	return (*pntH * *pntC * *pntL);
}

/**
*@brief Funcao que calcula o volume de uma esfera
*@param *pntR ponteiro do tipo float que aponta para o apontador do valor do raio
*@return valor do volume da esfera
*/
float volumeEsfera(float *pntR) {
	return ((4/3) * 3.14159 * *pntR * *pntR * *pntR);
}
