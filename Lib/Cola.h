#ifndef Cola_H
#define Cola_H

#include <string>
#include "Nodo.h"
using namespace std;

template<class Tipo>
class Cola {
    Nodo<Tipo> *Frente, *Final;
public:

    Cola() {
        Frente=NULL;
        Final=NULL;
    };

    bool Vacia(){
        return Frente == NULL;
    };

    bool Llena(){
        Nodo<Tipo> *p;
        p=new Nodo<Tipo>;
        if (p==NULL)
            return true;
        else
        {   delete p;
            return false;
        }
    };

    //crea el nodo con valor y prioridad
    Nodo<Tipo>* CrearNodo(Tipo Valor,int p){
        Nodo<Tipo> *nuevo;
        if(!Llena()){
            nuevo = new Nodo<Tipo>;
            nuevo->AsigInfo(Valor);
            nuevo->AsigPrioridad(p);
            nuevo->AsigProx(NULL);
            return nuevo;
        }else
            return NULL;
    }

    /*
    bool Insertar(Tipo Valor){
        Nodo<Tipo> *nuevo;
        if (!Llena())
        {
            nuevo=new Nodo<Tipo>;
            nuevo->AsigInfo(Valor);
            nuevo->AsigProx(NULL);
            if (Final==NULL)
                Frente=nuevo;
            else Final->AsigProx(nuevo);
            Final=nuevo;
            return true;
        }
        else return false;
    }
    */

    //Para insertar el nodo al final de la cola
    bool InsertarNodo(Nodo<Tipo> *nuevo){
        if(!Llena() && nuevo!=NULL){
            if(Final==NULL){
                Frente=nuevo;
            }else Final->AsigProx(nuevo);
            Final=nuevo;
            return true;
        } else
            return false;
    }

    //Inserta el nodo de acuerdo con la prioridad
    bool InsertarConPrioridad(Tipo valor,int p){
        Nodo<Tipo> *nuevo = new Nodo<Tipo>;
        nuevo = CrearNodo(valor,p);
        if (!Llena())
        {
            if (Final==NULL || nuevo->ObtPrioridad()==4)
                InsertarNodo(nuevo);
            else{
                Nodo<Tipo> *aux;
                aux = CrearNodo(0,9999);
                InsertarNodo(aux);
                Remover(aux);
                while(aux->ObtPrioridad()!=9999) {
                    if (nuevo->ObtPrioridad() < aux->ObtPrioridad()) {
                        InsertarNodo(nuevo);
                        InsertarNodo(aux);
                    }else{
                        InsertarNodo(aux);
                    }
                    Remover(aux);
                }
            }
            return true;
        }
        else return false;
    }

    bool Remover(Nodo<Tipo> *&Valor){
        Nodo<Tipo> *primero;
        if (!Vacia())
        {

            primero=Frente;
            Tipo x = primero->ObtInfo();
            int p = primero->ObtPrioridad();
            Valor = new Nodo<Tipo>;
            Valor->AsigInfo(x);
            Valor->AsigPrioridad(p);
            Frente=primero->ObtProx();
            if (Frente==NULL)
                Final=NULL;
            delete primero;
            return true;
        }
        else
            return false;
    }


};



#endif
