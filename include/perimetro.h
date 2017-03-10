#ifndef PERIMETRO_H
#define PERIMETRO_H

/**
*@brief Funcao que calcula o perimetro de um trinagulo equilatero
*@param *b ponteiro tipo float que aponta para o apontador do valor da base/lado
*@return valor do perimetro do triangulo
*/
float perimetroTrianguloEquilatero(float *pntB);

/**
*@brief Funcao que calcula o perimetro de um retangulo 
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base/lado
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor do perimetro do retangulo
*/
float perimetroRetangulo(float *pntB, float *pntH);

/**
*@brief Funcao que calcula o perimetro de um quadrado
*@param *l ponteiro tipo float que aponta para apontador do valor do lado
*@return valor do perimetro do quadrado
*/
float perimetroQuadrado(float *pntL);

/**
*@brief Funcao que calcula o perimetro de um circulo 
*@param *pntR ponteiro tipo float que aponta para o apontador do valor do raio
*@return valor do perimetro do circulo
*/
float perimetroCirculo(float *pntR);

#endif