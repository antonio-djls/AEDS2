#include<iostream>
#include<new>

/*
    Fila Implementada

*/


using namespace std;

struct no{
    int dado;
    no *frente;
    no *trás;
};

class fila{
    public:
        no *inicio;
        no *fim;
        int tamanhofila;
    fila(){
        inicio = nullptr;
        fim = nullptr;
        tamanhofila = 0;
    };
    void inserir(int x){
        if(inicio == nullptr && fim == nullptr){
            inicio = new no;
            inicio->dado = x;
            inicio->frente = nullptr;
            cout << "Valor alocado " << inicio->dado << endl;
        }else if(fim == nullptr){
            fim = new no;
            fim->dado = x;
            fim->frente = inicio;
            fim->trás = nullptr;
            cout << "Valor alocado " << fim->dado << endl;
        }else if ( fim->trás == nullptr && inicio != nullptr){
            no *aux = new no;
            aux->dado = x;
            aux->frente = fim;
            aux->trás = nullptr;
            fim->trás = aux;
            fim = aux;
            cout << "Valor alocado " << fim->dado << endl;
        }
    };
    void remover(){
        if(inicio == nullptr){
            cout  << "Lista vazia \n";
            return;
        }else{
            no *aux = inicio;
            inicio = inicio->trás;
            cout << "Valor desalocado " << aux->dado << endl;
            delete aux;
        }
    };
    void ver(){
        cout << "Valor do final da fila (último inserido)"  << inicio->dado << endl;
    };


};

int main(){
    fila f1;
    f1.inserir(9);
    f1.inserir(10);
    f1.inserir(11);
    f1.remover();
    return 0;
}