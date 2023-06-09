#include <iostream>
#include <cstring> //incluyo esta libreria para usar strcpy
using namespace std;

struct Persona {
    string nombre;
    char fecha[11];
    int tamanio_tarjeta;
    int* tarjeta;
    bool quiere_intercambiar;
};

int* comprarTarjeta(string nombre, int dia, int &m) {
    m = nombre.length();
    int* ar = new int[m];
    for(int i = 0; i < m; i++) {
        ar[i] = nombre[i] % dia;
    }
    return ar;
}

Persona unDia(Persona* personas, int dia) {
    cout << "Arreglo de personas: " << personas << endl;
    cout << "Días: " << dia << endl;
    // en la tarea la funcion se llama Persona* unDia.
    return *personas;   //verificar si retornar *personas o perzonas
}                      //cambie return personas por *personas

int main() {
    Persona ps[2];
    ps[0].nombre = "Pepito";
    strncpy(ps[0].fecha, "1999-01-12", sizeof(ps[0].fecha)-1); // esto copia la cadena de caracteres a arreglo de caracteres
                                //el sizeof lo utilizamos para asegurar que la funcion strncpy() no 
                                //sobrepase el tamaño del arreglo de destino al copiar. El -1 es para que haya espacio
                                //suficiente en el arreglo para el caracter nulo'\0' el cual es para indicar su terminacion
    ps[0].fecha[sizeof(ps[0].fecha)-1] = '\0'; //terminar con el caracter nulo
   //s[0].fecha = "1999-01-12"; //como era antes aca cambie string' ' por esto que me da mucho menos errores al compilar
    ps[0].quiere_intercambiar = 1; 
    ps[1].nombre = "sinnombre";
    strncpy(ps[1].fecha, "2012-20-01", sizeof(ps[1].fecha)-1);
    ps[1].fecha[sizeof(ps[0].fecha)-1] = '\n';
    //[1].fecha = "2012-20-01";     
    ps[1].quiere_intercambiar = 1;
    int dia = 2;
    int ar= unDia(Persona  ps, dia);
    cout<<"as:"<<ar<<endl;
    unDia(ps, dia);
    return 0;
}
