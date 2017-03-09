#include "trianguloEquilatero.h"

/**
*@brief Funcao que calcula a area de um trinagulo equilatero
*@param *b ponteiro tipo float que aponta para o valor da base/lado
*@param *h ponteiro tipo float que aponta para o valor da altura
*@return valor da area do triangulo
*/
float areaTrianguloEquilatero(float *b, float *h) {
	return (*b * *h)/2;
}


/**
*@brief Funcao que calcula o perimetro de um trinagulo equilatero
*@param *b ponteiro tipo float que aponta para o valor da base/lado
*@return valor do perimetro do triangulo
*/
float perimetroTrianguloEquilatero(float *b) {
	return (3 * *b);
}
