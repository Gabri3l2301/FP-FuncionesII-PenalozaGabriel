#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

//PROGRAMA PARA CALCULAR LA HIPOTENUSA CON LA FUNCIÓN "cmath"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    float ladoA;
    float ladoB;
    float hipotenusa;

    cout << "Ingrese el lado A del triángulo:";
    cin >> ladoA;
    cout << "Ingrese el lado B del triángulo:";
    cin >> ladoB;

    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    cout << "\nEntonces la hipotenusa del triángulo rectángulo es: " << hipotenusa << endl;
    
    return 0;
}