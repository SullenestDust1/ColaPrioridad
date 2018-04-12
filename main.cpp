#include <iostream>
#include "Lib/Cola.h"

int main() {
    Cola<int> cola;
    Nodo<int> *aux;
    aux = new Nodo<int>;
    cola.Insertar(99);
    cola.Insertar(11);

    cola.Remover(aux);
    cout << "Primer Valor: " << aux->ObtInfo() <<endl;

    cola.Remover(aux);
    cout << "Segundo Valor: " << aux->ObtInfo() <<endl;

    return 0;
}