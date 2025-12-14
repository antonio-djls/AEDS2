#include<iostream>
#include<new>

using namespace std;


/*
    Lista Duplamente Encadeada

*/
struct no{
    no *proximo;
    no *anterior;
    int dado;
};

class lista{
    public:
        no *primeiro;
        no *ultimo;
   void inserir(int x){
        if(primeiro == nullptr ){
            primeiro = new no;
            primeiro->dado = x;
            primeiro->anterior = nullptr;
            cout << "Número inserido "<< primeiro->dado << endl;
        }else if(ultimo == nullptr){
            ultimo = new no;
            ultimo->dado = x;
            ultimo->anterior = primeiro;
            ultimo->proximo = nullptr;
            cout << "Número adicionado " << ultimo->dado << endl;
        }else{
            no *aux = new no;
            aux->dado = x;
            aux->anterior = ultimo;
            aux->proximo = nullptr;
            ultimo = aux;
            cout << "Número adicionado " << ultimo->dado << endl;
        }
   }
   void remover(){
        no *aux = ultimo;
        ultimo = ultimo->anterior;
        cout << "Número deletado " << aux->dado;
        delete aux;
   }
   void find(int x){
    int j  = 0;
    no *aux = ultimo;
    if(ultimo == nullptr){
        cout << "Lista vazia \n";
        return;
    }
    while(aux != nullptr){
        if(aux->dado == x){
            cout << "Número encontrado " << x << endl;
            ++j;
            break;
        }else{
            aux = aux->anterior;
        }
    
    }
    if(j == 0) cout << "Número não encontrado \n";
    };
    void ver_todos_numeros(){
        no *aux = ultimo;
        cout << "-------------\n";
        cout <<" LISTANDO\n";
        cout << "-------------\n";
        while(aux == nullptr){
            cout << aux->dado << " ";
            aux = aux->anterior;
        }
    };
    void achar_maior(){
        no *aux = ultimo;
        int maior{ultimo->dado};
        while(aux != nullptr){
            if(aux->dado > maior){
                maior = aux->dado;
            }
            aux = aux->anterior;
        }
        cout << "Maior número encontrado " << maior << endl;
    };
    // void achar_menor(){
    //     no *aux = ultimo;
    //     int menor = ultimo->dado;
    //     while(aux != nullptr){
    //         if(aux->dado < menor){
    //             menor = aux->dado;
    //         }
    //         aux = aux->anterior;
    //     }
    //     cout << "Menor número encontrado " << menor << endl;
    // };

};


int main(){
    lista l1; 
    l1.inserir(5);
    l1.inserir(4);
    // l1.remover();
    l1.find(5);
    l1.achar_maior();
 
    return 0;
}