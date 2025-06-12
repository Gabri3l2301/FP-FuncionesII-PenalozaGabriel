#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int cantidad;
    int valorMaximo;
    
    cout << "Ingrese la cantidad de números aleatorios que desea imprimir: ";
    cin >> cantidad;
    cout << "Ingrese el valor máximo permitido: ";
    cin >> valorMaximo;

    cout << "\nNúmeros aleatorios generados\n";
    for(int i = 0; i < cantidad; i++){
        cout << rand() % valorMaximo + 1 << " "; 
    }
    cout << endl;

    return 0;
}