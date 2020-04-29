#include <iostream>
#include <cstdlib>
using namespace std;

//PROTOTIPOS DE FUNCION O METODO 
//Se utilizan para notificarle al main que existen estas funciones)
void menu(), altas(), bajas(), modificar();
int leermenu();

int main(int argc, char const *argv[]){

    int valor = 0;

    do{
        menu(); valor = leermenu();

        switch(valor){
            case 1: altas();
            case 2: bajas();
            case 3: modificar();
            case 4: exit(0);
        }
    }while(valor!=4);

    return 0;
}

//Declaración de las funciones/métodos (después de main)
void menu(){
    cout << "MENÚ INVENTARIO ABC" << endl << endl;
    cout << "[ 1 ] --- Añadir" << endl;
    cout << "[ 2 ] --- Suprimir" << endl;
    cout << "[ 3 ] --- Modificar" << endl;
    cout << "[ 4 ] --- Salir" << endl;

    return;
}

int leermenu(){
    char aux[5]; int opc = 0;
     
    do{
        cout << "Ingresa tu opcion: "; cin.getline(aux, 80);
        opc = atoi(aux);
    }while(opc<1 || opc>4);

    return opc;
}

void altas(); void bajas(); void modificar();