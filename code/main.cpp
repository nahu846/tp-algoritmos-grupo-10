#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Register
{
    string user;
    string password;
    string server;
};

// TO DO
void compararRegistros(Register vec1, Register vec2)
{
    if (strcmp(vec1.user, vec2.user) == 0)
    {
        // Hay coincidencia
    }

    // for (int i=0, i<3, i++){
    // if (vec1[i]==vec2[i]) {cout<<"Hay coincidencia"<< vec1[i]<<endl;}}
}

main()
{
    Register reg1;
    Register reg2;

    FILE *f1, *f2;
    f1 = fopen("register1.txt", "rb"); // Apertura de archivos en modo lectura
    f2 = fopen("register2.txt", "rb");

    while (!feof(f1)) {
        fread(&reg1, sizeof(Register), 1, f1); // Leo los valores del archivo 1 y los guardo en un vector auxiliar
    }
    fclose(f1);
    
    while (!feof(f2)) {
        fread(&reg2, sizeof(Register), 1, f2);
    }
    fclose(f2);

    compararRegistros(reg1, reg2); // compara dos vectores e informa si tienen elementos identicos (?)

    
    
}

// TO DO
//