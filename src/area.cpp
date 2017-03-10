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
*@brief Funcao que calcula a area de um quadrado
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado
*@return valor da area do quadrado
*/
float areaQuadrado(float *pntL) {
	return (*pntL * *pntL);
}