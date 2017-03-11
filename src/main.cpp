/** 
*@file geometrica
*@brief Programa que calcula perimetro, area e volume de figuras geometricas
*@author Luís Eduardo RIque
*@author Ygor Almeida
*@since 09/03/2017
*@date  11/03/2017
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include "calcArea.h"
#include "calcPerimetro.h"
#include "calcVolume.h"

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
            float baseTriang; /**< base do triangulo*/
            float alturaTriang; /**<altura do triangulo*/

            do {
                cout << "Digite o tamanho da base do triangulo: ";
                cin >> baseTriang;
                cout << "Digite o tamanho da altura do triangulo: ";
                cin >> alturaTriang;
                if(baseTriang <= 0 || alturaTriang<=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            } while(baseTriang <= 0 || alturaTriang<=0);

            calcAreaTrianguloEquilatero(&baseTriang, &alturaTriang);
            calcPerimetroTrianguloEquilatero(&baseTriang);
            break;
        case 2:
            float baseRetangulo; /**< base do retangulo*/
            float alturaRetangulo; /**<altura do retangulo*/

            do {
                cout << "Digite o tamanho da base do retangulo: ";
                cin >> baseRetangulo;
                cout << "Digite o tamanho da altura do retangulo: ";
                cin >> alturaRetangulo;
                if(baseRetangulo <=0 || alturaRetangulo<=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(baseRetangulo <=0 || alturaRetangulo<=0);

            calcAreaRetangulo(&baseRetangulo, &alturaRetangulo);
            calcPerimetroRetangulo(&baseRetangulo, &alturaRetangulo);
            break;
        case 3:
            float ladoQuadrado; /**< lado do quadrado*/
            
            do{
                cout << "Digite o tamanho do lado do quadrado: ";
                cin >> ladoQuadrado;
                if(ladoQuadrado <=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(ladoQuadrado <=0);

            calcAreaQuadrado(&ladoQuadrado);
            calcPerimetroQuadrado(&ladoQuadrado);
            break;
        case 4:
            float raioCirculo; /**< raio do circulo*/
            do {
                cout << "Digite o tamanho do raio do circulo: ";
                cin >> raioCirculo;
                if(raioCirculo <=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(raioCirculo <=0);

            calcAreaCirculo(&raioCirculo);
            calcPerimetroCirculo(&raioCirculo);
            break;
        case 5:
            float ladoBase; /**<lado da base da piramide */
            float ladoTriangulo; /**<lado do triangulo da piramide */
            float alturaTriangulo; /**<altura do triangulo da piramide */

            do {
                cout << "Digite o tamanho da base da piramide: ";
                cin >> ladoBase;
                cout << "Digite o tamanho da lateral da piramide: ";
                cin >> ladoTriangulo;
                cout << "Digite o tamanho da altura da piramide: ";
                cin >> alturaTriangulo;
                if(ladoBase <=0 || ladoTriangulo <=0 || alturaTriangulo <=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            } while(ladoBase <=0 || ladoTriangulo <=0 || alturaTriangulo <=0);

            calcAreaPiramide(&ladoBase, &ladoTriangulo, &alturaTriangulo);
            calcVolumePiramide(&ladoBase, &alturaTriangulo);
            break;
        case 6:
            float ladoCubo; /**<lado do cubo*/

            do {
                cout << "Digite o tamanho do lado do cubo: ";
                cin >> ladoCubo;
                if(ladoCubo<=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(ladoCubo <=0);

            calcAreaCubo(&ladoCubo);
            calcVolumeCubo(&ladoCubo);
            break;
        case 7:
            float alturaParalelepipedo; /**<altura do paralelepipedo*/
            float comprimentoParalelepipedo; /**<comprimento do paralelepipedo*/
            float larguraParalelepipedo; /**<largura do paralelepipedo*/

            do {
                cout << "Digite o tamanho da altura do paralelepipedo: ";
                cin >> alturaParalelepipedo;
                cout << "Digite o tamanho do comprimento do paralelepipedo: ";
                cin >> comprimentoParalelepipedo;
                cout << "Digite o tamanho da largura do paralelepipedo: ";
                cin >> larguraParalelepipedo;
                if(alturaParalelepipedo <=0 || comprimentoParalelepipedo <=0 || larguraParalelepipedo <=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(alturaParalelepipedo <=0 || comprimentoParalelepipedo <=0 || larguraParalelepipedo <=0);

            calcAreaParalelepipedo(&alturaParalelepipedo, &comprimentoParalelepipedo, &larguraParalelepipedo);
            calcVolumeParalelepipedo(&alturaParalelepipedo, &comprimentoParalelepipedo, &larguraParalelepipedo);
            break;
        case 8:
            float raioEsfera; /**<raio da esfera */

            do {
                cout << "Digite o tamanho do raio da esfera: ";
                cin >> raioEsfera;
                if(raioEsfera <=0) {
                    cout << endl;
                    cout << "Digite valores maiores que zero." << endl << endl;
                }
            }while(raioEsfera <=0);

            calcAreaEsfera(&raioEsfera);
            calcVolumeEsfera(&raioEsfera);
            break;
        default:
            cout << "Programa finalizado" << endl;

    }    
    
    return 0;
}