#include <iostream>
#include <string.h>
#include <cstdlib>

//USO DE STRCAT()
//Concatenacion de cadenas

using namespace std;

int main(int argc, char const *argv[]){
    char unidad[3], ruta[35], nombre[15], ext[5];
    char rutafinal[75] = "";

    cout << "\nUnidad: "; cin.getline(unidad, 3);
    cout << "\nRuta: "; cin.getline(ruta, 35);
    cout << "\nNombre del archivo: "; cin.getline(nombre, 15);
    cout << "\nExtension: "; cin.getline(ext, 5);

    strcat(rutafinal,unidad); strcat(rutafinal, ":/"); strcat(rutafinal,ruta);
    strcat(rutafinal,nombre); strcat(rutafinal, "."); strcat(rutafinal, ext);

    cout << "La ruta final es " << rutafinal << endl;
    //!
    //cout << "La ruta en MAYUSCULAS es " << strupr(rutafinal) << endl;
    //cout << "La ruta en minusculas es " << strlwr(rutafinal) << endl;
    cout << "La cantidad de letras en la ruta final es " << strlen(rutafinal) << endl;
    
    return 0;
}

