#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// PROGRAMA QUE SIMULA UN JUEGO DE DADOS POR TURNOS

int jugadaJugador1;
int jugadaJugador2;

void dado1(){
    cout << "╔═════════╗" << endl;
    cout << "║         ║" << endl;
    cout << "║    ●    ║" << endl;
    cout << "║         ║" << endl;
    cout << "╚═════════╝" << endl;
}

void dado2(){
    cout << "╔═════════╗" << endl;
    cout << "║ ●       ║" << endl;
    cout << "║         ║" << endl;
    cout << "║       ● ║" << endl;
    cout << "╚═════════╝" << endl;
}

void dado3(){
    cout << "╔═════════╗" << endl;
    cout << "║ ●       ║" << endl;
    cout << "║    ●    ║" << endl;
    cout << "║       ● ║" << endl;
    cout << "╚═════════╝" << endl;
}

void dado4(){
    cout << "╔═════════╗" << endl;
    cout << "║ ●     ● ║" << endl;
    cout << "║         ║" << endl;
    cout << "║ ●     ● ║" << endl;
    cout << "╚═════════╝" << endl;
}

void dado5(){
    cout << "╔═════════╗" << endl;
    cout << "║ ●     ● ║" << endl;
    cout << "║    ●    ║" << endl;
    cout << "║ ●     ● ║" << endl;
    cout << "╚═════════╝" << endl;
}

void dado6(){
    cout << "╔═════════╗" << endl;
    cout << "║  ●   ●  ║" << endl;
    cout << "║  ●   ●  ║" << endl;
    cout << "║  ●   ●  ║" << endl;
    cout << "╚═════════╝" << endl;
}

void numeroDadoJugador1(){
    switch(jugadaJugador1){
        case 1:
            dado1();
            break;
        case 2:
            dado2();
            break;
        case 3:
            dado3();
            break;
        case 4:
            dado4();
            break;
        case 5:
            dado5();
            break;
        case 6:
            dado6();
            break;
    }
}

void numeroDadoJugador2(){
    switch(jugadaJugador2){
        case 1:
            dado1();
            break;
        case 2:
            dado2();
            break;
        case 3:
            dado3();
            break;
        case 4:
            dado4();
            break;
        case 5:
            dado5();
            break;
        case 6:
            dado6();
            break;
    }
}

int main (){
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int victoriasjugador1 = 0;
    int victoriasjugador2 = 0;

    do{
        cout << "Jugador 1, presione Enter para tirar el dado...";
        cin.get();
        jugadaJugador1 = rand() % 6 + 1;
        cout << "Jugador 1 lanzó:" << endl;
        numeroDadoJugador1();

        cout << "Jugador 2, presione Enter para tirar el dado...";
        cin.get();
        jugadaJugador2 = rand() % 6 + 1;
        cout << "Jugador 2 lanzó:" << endl;
        numeroDadoJugador2();

        if(jugadaJugador1 > jugadaJugador2){
            cout << "\nJugador 1 ¡Ganaste un punto!";
            victoriasjugador1++;
        }else{
            cout << "\nJugador 2 ¡Ganaste un punto!";
            victoriasjugador2++;
        }

        cout << "\nRondas ganadas del jugador 1: " << victoriasjugador1 << endl;
        cout << "Rondas ganadas del jugador 2: " << victoriasjugador2 << endl;
        cout << "Pulse Enter para continuar...";
        cin.get();
        system("cls");
    }while (victoriasjugador1 < 3 && victoriasjugador2 < 3);

    if (victoriasjugador1 == 3){
        cout << "Felicidades Jugador 1 ¡USTED HA GANADO!" << endl;
    }else {
        cout << "Felicidades Jugador 2 ¡USTED HA GANADO!" << endl;
    }
    return 0;
}