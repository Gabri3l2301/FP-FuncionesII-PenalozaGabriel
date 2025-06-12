#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// PROGRAMA QUE SIMULA UN JUEGO DE DADOS POR TURNOS



int main (){
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int jugadaJugador1;
    int jugadaJugador2;
    int victoriasjugador1 = 0;
    int victoriasjugador2 = 0;

    do{
        cout << "Jugador 1, tire el dado" << endl;
        cin.get();
        jugadaJugador1 = rand() % 6 + 1;
        cout << "Jugador 2, tire el dado" << endl;
        cin.get();
        jugadaJugador2 = rand() % 6 + 1;

        if(jugadaJugador1 > jugadaJugador2){
            cout << "Jugador 1, ganaste un punto";
            victoriasjugador1++;
        }else{
            cout << "Jugador 2, ganaste un punto";
            victoriasjugador2++;
        }
        cout << "\nPulse Enter para continuar...";
        cin.get();
    }while (victoriasjugador1 < 3 && victoriasjugador2 < 3);

    return 0;
}