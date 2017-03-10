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

#include "calcArea.h"
#include "calcPerimetro.h"

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
            float base; /**< base do triangulo*/
            float altura; /**<altura do triangulo*/

            cout << "Digite o tamanho da base do triangulo: ";
            cin >> base;
            cout << "Digite o tamanho da altura do triangulo: ";
            cin >> altura;

            calcAreaTrianguloEquilatero(&base, &altura);
            calcPerimetroTrianguloEquilatero(&base);
            break;
        /**case 2:
            calcRetangulo();
            break;*/
        case 3:
            float lado; /**< lado do quadrado*/
            cout << "Digite o tamanho do lado do quadrado: ";
            cin >> lado;

            calcAreaQuadrado(&lado);
            calcPerimetroQuadrado(&lado);
            break;
        /**case 4:
            calcCirculo();
            break;
        case 5:
            calcPiramideBaseQuadrangular();
            break;
        case 6:
            calcCubo();
            break;
        case 7:
            calcParalelogramo();
            break;
        case 8:
            calcEsfera();
            break; */
        default:
            cout << "Programa finalizado" << endl;

    }    
    
    return 0;
}