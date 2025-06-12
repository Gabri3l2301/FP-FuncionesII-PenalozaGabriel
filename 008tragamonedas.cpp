#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int monedas = 100;
int cantidadApostada;

void tirada (){
    srand(time(0));
    int numero1 = rand() % 5 +1;
    int numero2 = rand() % 5 +1;
    int numero3 = rand() % 5 +1;

    cout << "Primer número: " << numero1 << endl;
    cout << "Segundo número: " << numero2 << endl;
    cout << "Tercer número: " << numero3 << endl;
    if (numero1 == numero2 && numero1 == numero3){
        cout << "Usted sacó una tercia" << endl;
        cout << "Ganó 10 veces su apuesta\n" << endl;
        monedas = monedas - cantidadApostada;
        monedas = monedas + cantidadApostada * 10;
    }else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3){
        cout << "Usted sacó un par" << endl;
        cout << "Ganó el doble de su apuesta\n" << endl;
        monedas = monedas - cantidadApostada;
        monedas = monedas + cantidadApostada * 2;
    }else if (numero1 == numero2 + 1 && numero1 == numero3 + 2){
        cout << "Usted sacó una escalera" << endl;
        cout << "Ganó 5 veces su apuesta\n" << endl;
        monedas = monedas - cantidadApostada;
        monedas = monedas + cantidadApostada * 5;
    }else if (numero1 == numero2 - 1 && numero1 == numero3 - 2){
        cout << "Usted sacó una escalera" << endl;
        cout << "Ganó 5 veces su apuesta\n" << endl;
        monedas = monedas - cantidadApostada;
        monedas = monedas + cantidadApostada * 5;
    }else{
        cout << "Usted no anotó nada...\n" << endl;
        monedas = monedas - cantidadApostada;
    }
}

void cantidadTirada (){
    cout << "\nIngrese la cantidad de monedas que va a tirar (1-10): ";
    cin >> cantidadApostada;
    tirada();
}

void mostrarSaldo (){
    cout << "\nSu saldo es de " << monedas << " monedas\n" << endl;
}

void menu (){
    int opcion;
    do{
        cout << "---SIMULACIÓN DE TRAGRAMONEDAS SIMPLE---" << endl;
        cout << "1. Tirar 1 vez" << endl;
        cout << "2. Mostrar saldo" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese una opción para jugar: "; 
        cin >> opcion;

        switch(opcion){
            case 1:
                cantidadTirada();
                break;
            case 2:
                mostrarSaldo();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Ingrese una opción válida..." << endl;
                break;
        }
    }while(opcion != 3 && monedas > 0);
}

int main (){
    SetConsoleOutputCP(CP_UTF8);
    menu();
    return 0;
}