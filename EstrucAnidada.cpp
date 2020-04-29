#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char const *argv[]){
    //Definir estructuras
    struct fecha{
        int dia, mes, anio;
    };
    struct alumno{
        char matricula[12];
        char carrera[25];
        struct fecha fechaIngreso; //Estructura anidada (fecha en alumno)
    };

    char aux[80];
    //Creando "a"
    struct alumno a,b;

    //Inicializando "a.fechaIngreso"
    cout << "Ingresa el dia: "; cin.getline(aux, 80);
    a.fechaIngreso.dia = atoi(aux);
    cout << "Ingresa el mes: "; cin.getline(aux, 80);
    a.fechaIngreso.mes = atoi(aux);
    cout << "Ingresa el anio: "; cin.getline(aux, 80);
    a.fechaIngreso.anio = atoi(aux);
    //Inicializando "a"
    cout << "Ingresa la Matricula: "; cin.getline(a.matricula, 12);
    cout << "Ingresa la Carrera: "; cin.getline(a.carrera, 25);

    //Imprimiendo datos de "a"
    cout << "\nLos datos del alumno A son: " << endl;
    cout << "Matricula: " << a.matricula << endl;
    cout << "Carrera: " << a.carrera << endl;
    cout << "Fecha: " << a.fechaIngreso.dia << "/" << a.fechaIngreso.mes 
            << "/" << a.fechaIngreso.anio << endl;

    //Copiar TODOS los datos de "a" en "b"
    b = a;

    //Imprimiendo datos de "b"
    cout << "\nLos datos del alumno B son: " << endl;
    cout << "Matricula: " << b.matricula << endl;
    cout << "Carrera: " << b.carrera << endl;
    cout << "Fecha: " << b.fechaIngreso.dia << "/" << b.fechaIngreso.mes 
            << "/" << b.fechaIngreso.anio << endl;

    return 0;
}