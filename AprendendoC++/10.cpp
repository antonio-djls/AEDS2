#include<iostream>

void passar_valor(int argumento){
    argumento =999;
}

void passar_por_referencia(int& argumento){
    std::cout << "Endereço de Argumento " << &argumento << std::endl;
    argumento = 9999;
}

int main(){
    int argumento{1};
    passar_valor(argumento);
    passar_por_referencia(argumento);

    return 0;
}