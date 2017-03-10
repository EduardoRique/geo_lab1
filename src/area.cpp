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
*@brief Funcao que calcula a area de uma piramide
*@param *pntB1 ponteiro tipo float que aponta para o apontador do valor da base
*@param *pntB2 ponteiro tipo float que aponta para o apontador do valor da base do triangulo
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area da piramide
*/
float areaPiramide(float *pntB1, float *pntB2, float *pntH) {
	return (areaQuadrado(pntB1) + areaTrianguloEquilatero(pntB2, pntH));
}