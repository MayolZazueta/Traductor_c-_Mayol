#ifndef _PILA
#define _PILA

#include <list>
#include <iostream>
#include <string>


using namespace std;
class Nodo;

class ElementoPila{
    protected:

    public:
        virtual void muestra(){}
        virtual int getEstado(){}
        virtual string getTerminal(){}
        virtual string getNoTerminal(){}
        virtual Nodo* getNodo(){}
};

class Terminal: public ElementoPila{
    protected:
        string terminal;
    public:
        Terminal(string terminal){
            this->terminal= terminal;
        }

        string getTerminal(){
            return this->terminal;
        }

        void muestra(){
            //cout << "Terminal: " << terminal << endl;
            cout << terminal << " ";
        }
};

class NoTerminal: public ElementoPila{
    protected:
        string noTerminal;
        Nodo* nodo;
    public:
        NoTerminal(string noTerminal, Nodo* nuevoNodo){
            this->noTerminal= noTerminal;
            this->nodo = nuevoNodo;
        }

       /* NoTerminal(string noTerminal){
            this->noTerminal= noTerminal;
        }*/

        string getNoTerminal(){
            return this->noTerminal;
        }

        Nodo* getNodo(){
            return this->nodo;
        }

        void muestra(){
            //cout << "NoTerminal: " << noTerminal << endl;
            cout << noTerminal << " ";
        }
};

class Estado: public ElementoPila{
    protected:
        int estado;
    public:
        Estado(int estado){
            this->estado= estado;
        }

        int getEstado(){
            return this->estado;
        }

        void muestra(){
            cout << estado << " " ;
        }
};

class Pila{

   private:
      list <ElementoPila*> lista;

   public:
      void push( ElementoPila*);
      ElementoPila* top();
      ElementoPila* pop();
      void muestra();
};


void Pila::push( ElementoPila *x){
    lista.push_front(x);
}

ElementoPila*  Pila::pop(){

	ElementoPila* x= *lista.begin();
    lista.erase ( lista.begin() );
    //delete(*lista.begin());
    //delete(NoTerminal*)p.pop();
    return x;
}

ElementoPila* Pila::top(){
    return *lista.begin();
}

void Pila::muestra(){

    list <ElementoPila*>::reverse_iterator  it;
    ElementoPila *x;
    cout << "Pila:-->\t ";

    for (it= lista.rbegin(); it != lista.rend(); it++){
        x = *it;
        x->muestra();
    }

    cout << endl;
}


#endif
