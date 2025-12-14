#include<iostream>
#include<new>

/*
    Implementando Pilha

*/

using namespace std;


struct no{
    no *anterior;
    int dado;

};

class pilha{
    public:
        no *topo;
        int j;
    pilha(){
        topo = nullptr;
        j = 0;
    };
    void inserir(int x){
        if(topo == nullptr){
            j++;
            topo = new no;
            topo->dado = x;
            topo->anterior = nullptr;
        }else{
            no *aux = new no;
            aux->anterior = topo;
            aux->dado = x;
            topo = aux;
            j++;
        }
    };
    void vazia(){
        if(topo != nullptr){
            cout << "A lista não está vazia \n";
        }else{
            cout << "A lista não está vazia \n";
        }
    };
    void remover(){
        if(topo == nullptr){
            cout << " A listá está vazia \n";
        }else{
            no *aux = topo;
            cout << "Valor removido " << aux->dado << endl;
            topo = topo->anterior;
            delete aux;
        }
    };
    void ver_topo(){
        cout << "Valor do topo: "  << topo->dado << endl;
    };
    void tamanho(){
        cout << "Número de elementos da pilha " << j << endl;
    };

};

int main(){
    pilha p1;
    p1.inserir(1);
    p1.ver_topo();
    p1.tamanho();
    p1.remover();



    return 0;
}