/** 
*@file geometrica
*@brief Programa que calcula perimetro, area e volume de figuras geometricas
*@author Luís Eduardo RIque
*@author Ygor Almeida
*@since 09/03/2017
*@date  09/03/2017
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "calcTrianguloEquilatero.h"

//#DEFINE pi = 3.14159; /** < Definicao do PI */

/**
*@brief Funcao principal
*/

int main(void){

int opcao; /** < Opcao que sera passada pelo usuario */
do{ 
    cout << endl;
    cout << "=========================================" << endl;
    cout << "Calculadora de Geometria Plana e Espacial" << endl;
    cout << "=========================================" << endl;
    cout << "(1) Triangulo equilatero" << endl;
    cout << "(2) Retangulo" << endl;
    cout << "(3) Quadrado" << endl;
    cout << "(4) Circulo" << endl;
    cout << "(5) Piramide com base quadrangular" << endl;
    cout << "(6) Cubo" << endl;
    cout << "(7) Paralelepipedo" << endl;
    cout << "(8) Esfera" << endl;
    cout << "(0) Sair" << endl;

    cout << endl;
    cout << "Digite a sua opcao: ";
    cin >> opcao;

    cout << endl;
    
    if(opcao<0 || opcao>8) cout << endl << endl << "=======================" << endl << "Digite uma opcao valida" << endl << "=======================" << endl << endl;

}while(opcao != 0 && (opcao<0 || opcao>8));
    
    switch(opcao) {
        case 1:
            calcTrianguloEquilatero();
            break;
        /**case 2:
            calcRetangulo(void);
            break;
        case 3:
            calcQuadrado(void);
            break;
        case 4:
            calcCirculo(void);
            break;
        case 5:
            calcPiramideBaseQuadrangular(void);
            break;
        case 6:
            calcCubo(void);
            break;
        case 7:
            calcParalelogramo(void);
            break;
        case 8:
            calcEsfera(void);
            break; */
        default:
            cout << "Programa finalizado" << endl;

    }    
    
    return 0;
}