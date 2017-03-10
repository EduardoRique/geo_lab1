#include "volume.h"

/**
*@brief Funcao que calcula o volume de uma piramide
*@param *pntB ponteiro tipo float que aponta para o apontador do valor da base
*@param *pntH ponteiro tipo float que aponta para o apontador do valor da altura
*@return valor do volume da piramide
*/
float volumePiramide(float *pntB, float *pntH) {
	return (*pntB * *pntB * *pntH)/3;
}