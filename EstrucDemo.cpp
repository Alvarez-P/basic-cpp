#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char const *argv[])
{
    //Definir estrutura "persona"
    struct persona{
        int edad;
        char nombre[55];
        char direc[55];
    };

    //Creando a1,b1 e inicializando b1
    struct persona a1, b1={21, "Alberto Marin", "Calle 5 Colonia Mayapan"};

    char aux[80];

    //Ingresando datos de a1
    cout << "Ingrese la edad: "; cin.getline(aux, 80);
    a1.edad = atoi(aux);
    cout << "Nombre: "; cin.getline(a1.nombre, 55);
    cout << "Direccion: "; cin.getline(a1.direc, 55);

    //Imprimiendo datos de a1
    cout << "Nombre: " << a1.nombre << endl;
    cout << "Edad: " << a1.edad << endl;
    cout << "Direccion: " << a1.direc << endl;
    //Imprimiendo datos de b1
    cout << "Nombre: " << b1.nombre << endl;
    cout << "Edad: " << b1.edad << endl;
    cout << "Direccion: " << b1.direc << endl;
    return 0;
}
