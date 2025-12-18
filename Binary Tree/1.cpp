#include<new>
#include<iostream>  
#include<string>

using namespace std;


struct no{
    int dados;
    string name;
    no *direita;
    no *esquerda;
};
class arvore{
    public:
        int dados{};
        string name;
        no *direita;
        no *esquerda;

};


int main(){
    arvore raiz;
    no a,b,c,d,e,f,g;


    a.name = "A";
    b.name = "B";
    c.name = "C";
    d.name = "D";
    e.name = "E";
    f.name = "F";
    
    raiz.direita = &b;
    raiz.esquerda = &a;

    a.direita = &d;
    a.esquerda = &c;

    b.esquerda = &e;
    b.direita = &f;

    f.esquerda = &g;

    cout << raiz.esquerda->name <<  "           " << raiz.direita->name << endl;
    
    return 0;
}