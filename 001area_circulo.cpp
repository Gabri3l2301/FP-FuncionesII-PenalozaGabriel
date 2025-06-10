#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

//PROGRAMA PARA CALCULAR EL ÁREA DE UN CÍRCULO CON LA LIBRERÍA "cmath"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    float radio;
    float area;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    area = M_PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;
    
    return 0;
}