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

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de uma 
*@piramide de base quandangular e apresenta o resultado na tela
*@param *b1 ponteiro do tipo float que aponta para o valor do lado da base da piramide
*@param *b2 ponteiro do tipo float que aponta para o valor lado do triangulo da piramide
*@param *h ponteiro do tipo float que aponta par o valor da altura do triangulo da piramide
*@return void
*/
void calcAreaPiramide(float *b1, float *b2, float *h);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@cubo e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado do cubo
*@return void
*/
void calcAreaCubo(float *l);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de um 
*@paralelepipedo e apresenta o resultado na tela
*@param *h ponteiro do tipo float que aponta para o valor da altura
*@param *c ponteiro do tipo float que aponta para o valor do comprimento
*@param *l ponteiro do tipo float que aponta para o valor da largura
*@return void
*/
void calcAreaParalelepipedo(float *h, float *c, float *l);

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da area de uma 
*@esfera e apresenta o resultado na tela
*@param *r ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcAreaEsfera(float *r);

#endif