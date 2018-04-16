#include <iostream>
#include "Lib/Cola.h"
#include "Lib/Genericas/VGeneral.h"
#include <string>
using namespace std;
int main() {
    Cola<int > cola;
    Nodo<int> *aux;
    VGeneral vg;
    int opc;
    vg.Pausa();
    do
    {
        vg.Limpiar();
        vg.ImprimirLineasBlanco(1);
        vg.Limpiar();
        vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
        vg.ImprimirMensaje("   1. CARGAR COLA\n");
        vg.ImprimirMensaje("   2. IMPRIMIR COLA B\n");
        vg.ImprimirMensaje("   3 FINALIZAR\n\n");
        opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,3);
        switch (opc)
        {
            case 1: {
                cola.InsertarConPrioridad(25,1);
                cola.InsertarConPrioridad(26,2);
                cola.InsertarConPrioridad(21,1);
                cola.InsertarConPrioridad(32,3);
                cola.InsertarConPrioridad(19,4);
                cola.InsertarConPrioridad(23,1);
                cola.InsertarConPrioridad(17,3);
                cola.InsertarConPrioridad(26,2);
                vg.ImprimirMensaje("   Cola Cargada Con EXITO!!");
            }
                break;
            case 2: {
                for(int i=0;i<8;i++){
                    aux = new Nodo<int>;
                    cola.Remover(aux);
                    cout<<"Prioridad cliente "<<i+1<<": "<<aux->ObtPrioridad()<<" Valor: "<<aux->ObtInfo()<<endl;

                }

            }
                break;
        }
    }
    while(opc != 3);

    return 0;
}