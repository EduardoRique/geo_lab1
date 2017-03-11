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

/**
*@brief Funcao que calcula a area de uma piramide
*@param *pntB1 ponteiro tipo float que aponta para o apontador do valor da base
*@param *pntB1 ponteiro tipo float que aponta para o apontador do valor da base do triangulo
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor da area da piramide
*/
float areaPiramide(float *pntB1, float *pntB2, float *pntH);

/**
*@brief Funcao que calcula a area de um cubo
*@param *pntL ponteiro tipo float que aponta para o apontador do valor do lado do cubo
*@return valor da area do cubo
*/
float areaCubo(float *pntL);

/**
*@brief Funcao que calcula a area de um paralelepipedo
*@param *pntH ponteiro do tipo float que aponta para o apontador do valor da altura
*@param *pntC ponteiro do tipo float que aponta para o apontador do valor do comprimento
*@param *pntL ponteiro tipo float que aponta para o apontador do valor da largura
*@return valor da area do paralelepipedo
*/
float areaParalelepipedo(float *pntH, float *pntC, float *pntL);

/**
*@brief Funcao que calcula a area de uma esfera
*@param *pntR ponteiro tipo float que aponta para o apontador do valor do raio
*@return valor da area da esfera
*/
float areaEsfera(float *pntR);

#endif