#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

//PROGRAMA PARA CALCULAR LAS RAICES DE UNA ECUACIÓN CUADRÁTICA

void calcularRaices(int a, int b, int c, float &x1, float &x2, bool &reales) {
    float discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante >= 0) {
        x1 = (-b + sqrt(discriminante)) / (2.0 * a);
        x2 = (-b - sqrt(discriminante)) / (2.0 * a);
        reales = true;
    } else {
        x1 = -b / (2.0 * a); // Parte real
        x2 = sqrt(-discriminante) / (2.0 * a); // Parte imaginaria
        reales = false;
    }
}

int main (){
    SetConsoleOutputCP(CP_UTF8);
    int a;
    int b;
    int c;
    float x1;
    float x2;
    bool sonReales;

    cout << "Ingrese el primer coeficiente: ";
    cin >> a;
    cout << "Ingrese el segundo coeficiente: ";
    cin >> b;
    cout << "Ingrese el tercer coeficiente: ";
    cin >> c;

    calcularRaices(a, b, c, x1, x2, sonReales);

    if (sonReales){
        cout << "\nLa primera raíz de la ecuación es: " << x1 << endl;
        cout << "La segunda raíz de la ecuación es: " << x2 << endl;
    } else {
        cout << "\nLas raices son imaginarias" << endl;
        cout << "La primera raíz de la ecuación es: (" << -b << " + " << sqrt(-(pow(b,2) - 4*a*c)) << "i" << ") / " << 2 * a << endl;
        cout << "La segunda raíz de la ecuación es: (" << -b << " - " << sqrt(-(pow(b,2) - 4*a*c)) << "i" << ") / " << 2 * a << endl;
        cout << "Parte real: " << x1 << ", parte imaginaria: ±" << x2  << "i" << endl;
    }

    return 0;
}