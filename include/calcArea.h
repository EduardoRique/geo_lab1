#ifndef CALCAREA_H
#define CALCAREA_H

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@trinagulo equilatero e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta par o valor da altura
*@return void
*/
void calcAreaTrianguloEquilatero(float *b, float *h);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@retangulo e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta par o valor da altura
*@return void
*/
void calcAreaRetangulo(float *b, float *h);


/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado
*@return void
*/
void calcAreaQuadrado(float *l);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@circulo e apresenta o resultado na tela
*@param * ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcAreaCirculo(float *r);

#endif