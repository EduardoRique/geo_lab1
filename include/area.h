#ifndef AREA_H
#define	AREA_H

/**
*@brief Funcao que calcula a area de um trinagulo equilatero
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base/lado
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area do triangulo
*/
float areaTrianguloEquilatero(float *pntB, float *pntH);

/**
*@brief Funcao que calcula a area de um retangulo
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base/lado
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area do retangulo
*/
float areaRetangulo(float *pntB, float *pntH);

/**
*@brief Funcao que calcula a area de um quadrado
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado
*@return valor da area do quadrado
*/
float areaQuadrado(float *pntL);

/**
*@brief Funcao que calcula a area de um circulo
*@param *pntR ponteiro tipo float que aponta para o apontador do valor do raio
*@return valor da area do circulo
*/
float areaCirculo(float *pntR);

#endif