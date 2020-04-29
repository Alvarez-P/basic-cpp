#include <iostream>
#include <cstdlib>
using namespace std;

// LEER UNA CADENA Y OBTENER LA CANTIDAD DE DIGIOS Y ESPACIOS EN BLANCO
//Ejemplo de funciones por referencia

//Pasamos la direccion de las variables "cd" y "ce" (en este caso "contd" y "conte"), no su valor.
void encuentra(int &cd, int &ce, char cad[80]);//Para pasar un arreglo de 1d, no se pone [], 2d solo un []

int main(int argc, char const *argv[]){
    int contd = 0, conte = 0;
    char s[80];
    cout << "Teclea una frase: "; cin.getline(s, 80);

    encuentra(contd, conte, s);//Pasar un arreglo de 1d; type var -> type[] var or type
                                //Pasar arreglo de 2d type var[] -> type var[] or type var[][]

    //Imprimiendo resultados
    cout << "Dígitos encontrados: " << contd << endl;
    cout << "Espacios encontrados: " << conte << endl;

    return 0;
}

void encuentra(int &cd, int &ce, char cad[80]){
    for(int i = 0; cad[i] != '\0'; i++){
        if(cad[i] >= '0' && cad[i] <= '9') cd++;
        if(cad[i] == ' ') ce++;
    }
}