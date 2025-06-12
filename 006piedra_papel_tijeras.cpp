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

        system("cls");
        jugadaPC = rand() % 3 + 1;
        switch (jugadaUser){
        case 1:
            cout << "\nJugada del Usuario: " << endl;
            cout << "    _______"          << endl;
            cout << "---'   ____)"         << endl;
            cout << "      (_____)"        << endl;
            cout << "      (_____)"        << endl;
            cout << "      (____)"         << endl;
            cout << "---.__(___)"          << endl;                
            if (jugadaPC == 1){
                cout << "Jugada de la PC: " << endl;
                cout << "    _______"       << endl;
                cout << "---'   ____)"      << endl;
                cout << "      (_____)"     << endl;
                cout << "      (_____)"     << endl;
                cout << "      (____)"      << endl;
                cout << "---.__(___)"       << endl;
                cout << "Empate, ninguno anota puntos...\n" << endl;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else if (jugadaPC == 2){
                cout << "Jugada de la PC: "     << endl;
                cout << "     _______"          << endl;
                cout << "---'    ____)____"     << endl;
                cout << "           ______)"    << endl;
                cout << "          _______)"    << endl;
                cout << "         _______)"     << endl;
                cout << "---.__________)"       << endl;
                cout << "Punto para la PC...\n" << endl;
                victoriasPC++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else{
                cout << "Jugada de la PC: "     << endl;
                cout << "    _______"           << endl;
                cout << "---'   ____)____"      << endl;
                cout << "          ______)"     << endl;
                cout << "       __________)"    << endl;
                cout << "      (____)"          << endl;
                cout << "---.__(___)"           << endl;
                cout << "Punto para el usuario...\n" << endl;
                victoriasUser++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }
            break;
            
        case 2:
            cout << "\nJugada del Usuario: " << endl;
            cout << "     _______"          << endl;
            cout << "---'    ____)____"     << endl;
            cout << "           ______)"    << endl;
            cout << "          _______)"    << endl;
            cout << "         _______)"     << endl;
            cout << "---.__________)"       << endl;
            if (jugadaPC == 1){
                cout << "Jugada de la PC: " << endl;
                cout << "    _______"       << endl;
                cout << "---'   ____)"      << endl;
                cout << "      (_____)"     << endl;
                cout << "      (_____)"     << endl;
                cout << "      (____)"      << endl;
                cout << "---.__(___)"       << endl;
                cout << "Punto para el usuario...\n" << endl;
                victoriasUser++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else if (jugadaPC == 2){
                cout << "Jugada de la PC: "     << endl;
                cout << "     _______"          << endl;
                cout << "---'    ____)____"     << endl;
                cout << "           ______)"    << endl;
                cout << "          _______)"    << endl;
                cout << "         _______)"     << endl;
                cout << "---.__________)"       << endl;
                cout << "Empate, ninguno anota puntos...\n" << endl;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else{
                cout << "Jugada de la PC: "     << endl;
                cout << "    _______"           << endl;
                cout << "---'   ____)____"      << endl;
                cout << "          ______)"     << endl;
                cout << "       __________)"    << endl;
                cout << "      (____)"          << endl;
                cout << "---.__(___)"           << endl;
                cout << "Punto para la PC...\n" << endl;
                victoriasPC++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }
            break;

        case 3:
            cout << "\nJugada del Usuario: " << endl;
            cout << "    _______"           << endl;
            cout << "---'   ____)____"      << endl;
            cout << "          ______)"     << endl;
            cout << "       __________)"    << endl;
            cout << "      (____)"          << endl;
            cout << "---.__(___)"           << endl;
            if (jugadaPC == 1){
                cout << "Jugada de la PC: " << endl;
                cout << "    _______"       << endl;
                cout << "---'   ____)"      << endl;
                cout << "      (_____)"     << endl;
                cout << "      (_____)"     << endl;
                cout << "      (____)"      << endl;
                cout << "---.__(___)"       << endl;
                cout << "Punto para la PC...\n" << endl;
                victoriasPC++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else if (jugadaPC == 2){
                cout << "Jugada de la PC: "     << endl;
                cout << "     _______"          << endl;
                cout << "---'    ____)____"     << endl;
                cout << "           ______)"    << endl;
                cout << "          _______)"    << endl;
                cout << "         _______)"     << endl;
                cout << "---.__________)"       << endl;
                cout << "Punto para el usuario...\n" << endl;
                victoriasUser++;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }else{
                cout << "Jugada de la PC: "     << endl;
                cout << "    _______"           << endl;
                cout << "---'   ____)____"      << endl;
                cout << "          ______)"     << endl;
                cout << "       __________)"    << endl;
                cout << "      (____)"          << endl;
                cout << "---.__(___)"           << endl;
                cout << "Empate, ninguno anota puntos...\n" << endl;
                cout << "Victorias de la PC: " << victoriasPC << endl;
                cout << "Victorias del usuario: " << victoriasUser << endl << endl;
            }
            break;
        
        default:
            cout << "Error, ingrese un número correcto..." << endl;
            break;
        }
    }while(victoriasPC < 3 && victoriasUser < 3);
    
    if (victoriasPC == 3){
        cout << "La PC ganó, buena suerte para la próxima" << endl;
    }else{
        cout << "¡Usted ha ganado, muchas felicitaciones!" << endl;
    }

    return 0;
}