#include "perimetro.h"

/**
*@brief Funcao que calcula o perimetro de um trinagulo equilatero
*@param *b ponteiro tipo float que aponta para o apontador do valor da base/lado
*@return valor do perimetro do triangulo
*/
float perimetroTrianguloEquilatero(float *pntB) {
	return (3 * *pntB);
}

/**
*@brief Funcao que calcula o perimetro de um quadrado
*@param *l ponteiro tipo float que aponta para apontador do valor do lado
*@return valor do perimetro do quadrado
*/
float perimetroQuadrado(float *pntL) {
	return (4 * *pntL);
}