#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "calcTrianguloEquilatero.h"
#include "trianguloEquilatero.h"


/**
*@brief Funcao que requisita parametros para o calculo do perimetro e da area de 
*@um triangulo equilatero e apresenta o resultado na tela
*@param void
*@return void
*/
void calcTrianguloEquilatero(void) {

	float base; /**< base do triangulo*/
	float altura; /**<altura do triangulo*/

	cout << "Digite o tamanho da base do triangulo: ";
	cin >> base;

	cout << "Digite o tamanho da altura do triangulo: ";
	cin >> altura;
	
	cout << endl;
	cout << "Area do triangulo: " << areaTrianguloEquilatero(&base, &altura) << endl;
	cout << "Perimetro do triangulo: " << perimetroTrianguloEquilatero(&base) << endl;
}
