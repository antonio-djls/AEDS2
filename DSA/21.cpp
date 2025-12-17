include<iostream>
#include<new>
#include<list>


using namespace std;

class hashset{
    public:
        list<int> lista[5];

    int hash(int x){
        return x % 5;
    };

    void inserir(int j){
        int valor = hash(j);
        lista[valor].push_back(j);
        cout << "Valor alocado" << endl;

    };
    // hash -> valor (Em cada parte da lista)
    void buscar(int x){
        int i  = hash(x);
        for( int v : lista[i]){
            if( v == x){
                cout << "Número encontrado \n";
                return;
            }
        }
    };

    void imprimir(){
        for(int k = 0; k < 5; k++){
            for( int v : lista[k]){
                cout << v << endl;
            }
        }

    }
};

int main(){
    hashset l1;
    l1.inserir(1);
    l1.inseri;
    l1.inserir(22);
    l1.imprimir();

    return 0;
}
