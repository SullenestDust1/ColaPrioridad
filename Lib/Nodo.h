#ifndef Nodo_H
#define Nodo_H

template<class Tipo>
class Nodo {

private:
    Tipo info;
    Nodo<Tipo> *prox;
    int priori;
public:

    void AsigInfo(Tipo in) {
        info = in;
    }

    Tipo ObtInfo() {
        return info;
    }

    void AsigProx(Nodo<Tipo> *p) {
        prox = p;
    }

    Tipo ObtInfo(Nodo<Tipo> *p) {
        return p->ObtInfo();
    }

    void AsigPrioridad(int p) {
        priori = p;
    }

    int ObtPrioridad(){
        return priori;
    }

    Nodo<Tipo> *ObtProx() {
        return prox;
    }
};

#endif

