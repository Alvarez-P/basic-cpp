#include <iostream>
#include <cstdlib>

using namespace std;

//OBTENER EL AREA DE UN RECTANGULO

double rectangulo(float base, float altura);

int main(int argc, char const *argv[])
{
    float base = 15.5, altura = 8.3;
    double areaRect = 0;

    areaRect = rectangulo(base, altura);

    cout << "El area del rectángulo es: " << areaRect << endl;

    return 0;
}

double rectangulo(float base, float altura){
    return base*altura;
}