#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

//PROGRAMA QUE SIMULA EL JUEGO PIEDRA, PAPEL Y TIJERAS

int main(){
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int jugadaPC;
    int jugadaUser;
    int victoriasPC = 0;
    int victoriasUser = 0;
    do{
        cout << "Ingrese un número para jugar:" << endl;
        cout << "1. Piedra" << endl;
        cout << "2. Papel" << endl;
        cout << "3. Tijeras" << endl;
        cin >> jugadaUser;

        jugadaPC = rand() % 3 + 1;
        switch (jugadaUser){
        case 1:
            if (jugadaPC == 1){
                cout << "Empate, ninguno anota puntos..." << endl;
            }else if (jugadaPC == 2){
                cout << "Punto para la PC..." << endl;
                victoriasPC++;
            }else{
                cout << "Punto para el usuario..." << endl;
                victoriasUser++;
            }
            break;
        case 2:
            if (jugadaPC == 1){
                cout << "Punto para el usuario..." << endl;
                victoriasUser++;
            }else if (jugadaPC == 2){
                cout << "Empate, ninguno anota puntos..." << endl;
            }else{
                cout << "Punto para la PC..." << endl;
                victoriasPC++;
            }
            break;
        case 3:
            if (jugadaPC == 1){
                cout << "Punto para la PC..." << endl;
                victoriasPC++;
                
            }else if (jugadaPC == 2){
                cout << "Punto para el usuario..." << endl;
                victoriasUser++;
            }else{
                
                cout << "Empate, ninguno anota puntos..." << endl;
            }
            break;
        
        default:
            cout << "Error, ingrese un número correcto..." << endl;
            break;
        }
    }while(victoriasPC < 3 && victoriasUser < 3);
    
    return 0;
}