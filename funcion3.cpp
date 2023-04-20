#include <iostream>
using namespace std;
struct Persona {
    string nombre ;
    char fecha [11];
    int tamanio_tarjeta ;
    int* tarjeta ;

};
int puntaje(Persona* p1){
    int tamano, suma=0;
    tamano= p1->tamanio_tarjeta;
    tamano-=1;
    for(int i=0 ; i<tamano ; i++ ){
        suma+= p1->tarjeta[i] * (p1->fecha[i % 10]);
        //suma= (tarj[i])+p1->fecha[i%10];
        cout << "la segunda cosa es: " << p1->fecha[i % 10] << endl ;
        cout << "la primera cosa es: " << p1->tarjeta[i] << endl ;
        cout << "esta suma es: " << suma << endl ;
        if (p1 -> fecha[i]== '-'){
            tamano++;
        }
    }
    return suma;

}




int main (){
        string name1;
    int p_total;
        int a [7] = {0 , 1 , 1 , 0, 1, 0, 1};
        int b [7] = {0 , 1 , 1 , 0, 1, 0, 1 };
        Persona p1= {"Juanito", "2000-12-10", 8, a};
    Persona p2= {"Juanito", "2000-12-10", 7, b};
    p_total= puntaje(&p1);
    cout << "el puntaje total es: " << p_total << endl ;



    return 0;


}
