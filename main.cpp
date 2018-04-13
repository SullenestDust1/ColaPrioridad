#include <iostream>
#include "Lib/Cola.h"
#include <string>
int main() {
    Cola<int> cola;
    Nodo<int> *aux;
    //cola.Remover(aux);
    //cout <<"Prioridad: "<< aux->ObtPrioridad()<<endl;
    //cout <<"Info "<< aux->ObtInfo()<<endl;
    cola.InsertarConPrioridad(25,1);
    cola.InsertarConPrioridad(31,2);
    cola.InsertarConPrioridad(21,1);
    cola.InsertarConPrioridad(32,3);
    cola.InsertarConPrioridad(19,4);
    cola.InsertarConPrioridad(23,1);
    cola.InsertarConPrioridad(17,3);
    cola.InsertarConPrioridad(26,2);

    for(int i=0;i<8;i++){
        aux = new Nodo<int>;
        cola.Remover(aux);
        cout<<"Prioridad cliente "<<i+1<<": "<<aux->ObtPrioridad()<<"\n valor: "<<aux->ObtInfo()<<endl;

    }




    /*
    Cola<int> cola;
    Nodo<int> *aux;
    aux = new Nodo<int>;
    cola.InsertarNodo(cola.CrearNodo(2,5));
    cola.InsertarNodo(cola.CrearNodo(6,7));
    cola.InsertarNodo(cola.CrearNodo(1,2));

    cola.Remover(aux);
    cout << "Primer Valor: " << aux->ObtInfo() <<endl;
    cout << "Prioridad: " << aux->ObtPrioridad()<< endl;

    cola.Remover(aux);
    cout << "Segundo Valor: " << aux->ObtInfo() <<endl;
    cout << "Prioridad: " << aux->ObtPrioridad()<< endl;

    cola.Remover(aux);
    cout << "Tercer Valor: " << aux->ObtInfo() <<endl;
    cout << "Prioridad: " << aux->ObtPrioridad()<< endl;
    */
    return 0;
}