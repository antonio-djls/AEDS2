#include<iostream>
#include<new>

/*
    Lista Encadeada
*/
using namespace std;

struct no{
    no *proximo;
    int dado;
};

class lista{
    public: 
        no *primeiro;

    lista(){
        primeiro = nullptr;
    };
    void mostrar(){
        cout << primeiro->dado << endl;
    };
    void inserir(int x){
        no *aux = new no;
        aux->dado = x;
        aux->proximo = primeiro;
        primeiro = aux;
        cout << "Valor inserido " << primeiro->dado << endl;
    
    };
    void retirar(){
        if(primeiro == nullptr){
            cout << "Lista vazia";
        }else{
            no *aux = primeiro;
            primeiro = primeiro->proximo;
            cout << "Valor deletado " << aux->dado << endl;
            delete aux;
        }

    };
    ~lista(){
        while(primeiro != nullptr){
            no *aux =  primeiro;
            primeiro =  primeiro->proximo;
            delete aux;
        }
    };

};


int main(){
    lista l1;
    l1.inserir(5);
    l1.retirar();


    return 0;
}