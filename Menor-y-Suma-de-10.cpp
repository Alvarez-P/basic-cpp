#include <iostream>
#include <cstdlib>
//PROGRAMA QUE CON FUNCIONES:
//1) Almacena 10 enteros en arreglo
//2) Obtiene el menor de los 10
//3) Suma el valor de los 10

using namespace std;

void almacenar(int arreglo[10]); int encuentraMenor(int arreglo[10]); int sumar(int arreglo[10]);

int main(int argc, char const *argv[]){
    int arregloEnteros[10];

    almacenar(arregloEnteros);
    int menor = encuentraMenor(arregloEnteros);
    int suma = sumar(arregloEnteros);

    //Imprimiendo resultados
    cout << "El numero menor es " << menor << endl;
    cout << "La suma de los numeros es " << suma << endl;

    return 0;
}

void almacenar(int arreglo[10]){
    char aux[10];
    for(int i=0; i<10; i++){
        cout << "Ingresa el entero en el lugar " << i+1 << ": "; cin.getline(aux, 10);
        arreglo[i] = atoi(aux);
    }
    return ;
}

int encuentraMenor(int arreglo[10]){
    int menor = arreglo[0];
    for(int i=1; i<10; i++){
        if(arreglo[i] < menor) menor = arreglo[i];
    }

    return menor;
}

int sumar(int arreglo[10]){
    int suma = 0;
    for(int i=0; i<10; i++){
        suma += arreglo[i];
    }

    return suma;
}
