#include <iostream>
#include <string.h>
#include <cstdlib>
//Manejo de arreglos de cadena y numericos
using namespace std;

int main(int argc, char const *argv[]){
    char nombre[55] = "", direc[55] = "";
    char aux[80];

    int edad = 0;
    int valores[5] = {0};

    cout << "Nombre: "; cin.getline(aux, 55);
    cout << "\nDireccion: "; cin.getline(aux, 50);
    cout << "\nEdad "; cin.getline(aux, 5);
    edad = atoi(aux);

    for(int i=0; i<5; i++){
        cout << "Numero: ";
        cin.getline(aux, 80);
        valores[i] = atoi(aux);
    }

    return 0;
}
