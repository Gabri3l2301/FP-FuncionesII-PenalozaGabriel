#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

//PROGRAMA PARA CALCULAR LAS RAICES DE UNA ECUACIÓN CUADRÁTICA

int main (){
    SetConsoleOutputCP(CP_UTF8);
    int a;
    int b;
    int c;
    float x1;
    float x2;
    float discriminante;

    cout << "Ingrese el primer coeficiente: ";
    cin >> a;
    cout << "Ingrese el segundo coeficiente: ";
    cin >> b;
    cout << "Ingrese el tercer coeficiente: ";
    cin >> c;
    
    discriminante = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(discriminante)) / 2 * a;
    x2 = (-b - sqrt(discriminante)) / 2 * a;
    if (discriminante >= 0){
        cout << "\nLa primera raíz de la ecuación es: " << x1 << endl;
        cout << "La segunda raíz de la ecuación es: " << x2 << endl;
    }else{
        cout << "\nLas raices son imaginarias" << endl;
        cout << "La primera raíz de la ecuación es: " << "(" << -b << " + " << sqrt(-discriminante) << "i" << ") / " << 2 * a << endl;
        cout << "La segunda raíz de la ecuación es: " << "(" << -b << " - " << sqrt(-discriminante) << "i" << ") / " << 2 * a << endl;
    }
    
    return 0;
}