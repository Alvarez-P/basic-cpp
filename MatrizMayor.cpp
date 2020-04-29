#include <iostream>
#include <string.h>
#include <cstdlib>

//DADOS UNA MATRIZ DE CARACTERES ON 10 NOMBRES
//ORDENAR DICHOS NOMBRES DE MANERA ASCENDENTE (A - z)
using namespace std;

int main(int argc, char **argv)
{
    char n[10][50] = {"PACO","paco","pepe","PEPE","LUIS","ALICIA","ALMA","alma","tono","laura"};
    char tmp[55];

    //Ordenamiento de burbuja
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(strcmp(n[i], n[j]) > 0){
                strcpy(tmp, n[i]);
                strcpy(n[i], n[j]);
                strcpy(n[j], tmp);
            }
        }
    }

    //Imprimir lista ordenada de nombres
    for(int i=0; i<10; i++) cout << n[i] << endl;

    return 0;
}
