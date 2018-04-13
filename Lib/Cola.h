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

    bool InsertarConPrioridad(Tipo Valor,int p){
        Nodo<Tipo> *nuevo;
        if (!Llena())
        {
            nuevo=new Nodo<Tipo>;
            nuevo->AsigInfo(Valor);
            nuevo->AsigProx(NULL);
            nuevo->AsigPrioridad(p);
            if (Final==NULL)
                Frente=nuevo;
            else Final->AsigProx(nuevo);
            Final=nuevo;
            return true;
        }
        else return false;
    }

    bool Remover(Nodo<Tipo> *&Valor){
        Nodo<Tipo> *primero;
        if (!Vacia())
        {

            primero=Frente;
            Valor->AsigInfo(primero->ObtInfo());
            Valor->AsigPrioridad(primero->ObtPrioridad());
            Valor->AsigProx(NULL);
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
