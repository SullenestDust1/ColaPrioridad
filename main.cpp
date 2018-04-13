#include <iostream>
#include "Lib/Cola.h"

int main() {
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



    return 0;
}