#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "calcVolume.h"
#include "volume.h"

/**
*@brief Funcao que passa parametro para outra funcao fazer o calculo do volume de uma 
*@piramide e apresenta o resultado na tela
*@param *b ponteiro do tipo float que aponta para o valor da base
*@param *h ponteiro do tipo float que aponta par o valor da altura
*@return void
*/
void calcVolumePiramide(float *b, float *h) {		

	cout << endl;
	cout << "Volume da piramide: " << volumePiramide(b, h) << endl;
}