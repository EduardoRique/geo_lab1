/** 
*@file calcPerimetro.h
*@brief Arquivo cabecalho contendo a definicao de funcoes que apresentam 
*		os resultados dos calculos de perimetro na tela realizam a passagem 
*		de parametros, para funcoes que faram os calculos
*@author Luís Eduardo RIque (luiseduardorique@gmail.com)
*@author Ygor Almeida (ygoralmeida@gmail.com)
*@since 09/03/2017
*@date  12/03/2017
*/

#ifndef CALCPERIMETRO_H
#define CALCPERIMETRO_H

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um triangulo
*		equilatero e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@return void
*/
void calcPerimetroTrianguloEquilatero(float *b);

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um retangulo
*		e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta para o valor da altura
*@return void
*/
void calcPerimetroRetangulo(float *b, float *h);


/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da perimetro
*		de um quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado
*@return void
*/
void calcPerimetroQuadrado(float *l);

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um circulo
*		e apresenta o resultado na tela
*@param *r ponteiro do tipo float que aponta para o valor do raio
*@return void
*/
void calcPerimetroCirculo(float *r);

#endif