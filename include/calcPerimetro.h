#ifndef CALCPERIMETRO_H
#define CALCPERIMETRO_H

/**
*@brief Funcao que requisita parametros para o calculo do perimetro de um triangulo
*@equilatero e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@return void
*/
void calcPerimetroTrianguloEquilatero(float *b);


/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo da perimetro
*@de um quadrado e apresenta o resultado na tela
*@param *l ponteiro do tipo float que aponta para o valor do lado
*@return void
*/
void calcPerimetroQuadrado(float *l);

#endif