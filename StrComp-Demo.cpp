#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;
//MANIPULACION DE CARACTERES
int main(int argc, char** argv){
    char s1[80] = "Merida", s2[80] = "Mexico", s3[80] = "Toluca";
    int valor = 0;

    //strcomp(string1, string 2);
    //Devuelve 0 en caso de que ambas cadenas sean lexicograficamente iguales
    //Si el valor devuelto es negativo la segunda cadena es mayor
    //Si el valor es positivo la primera es mayor

    valor = strcmp(s1, s2);
    if(valor==0) cout << "Las cadenas son iguales" << endl;
    else cout << "Las cadenas son diferentes" << endl;
    if(valor<0) cout << s2 << " es mayor" << endl;
    else cout << s1 << " es mayor" << endl;
    return 0;
}

