#include<iostream>
#include<typeinfo>

int main(){
    int x = 10;
    int& referencia = x; // cria um ponteiro para X
    int* y = nullptr;
    int*& referencia2 = y;
    // std::cout << referencia << std::endl;
    // std::cout << "Valor de x " << x << std::endl;
    // referencia = 42;

    // std::cout << referencia << std::endl;
    // std::cout << "Valor de x " << x << std::endl;
    // std::cout << "Endereço de Referencia" << &x << std::endl;
    // std::cout << "Endereço de Referencia de ref " << &referencia << std::endl;
    std::cout << "Tipo X" << typeid(x).name() << std::endl;
    
    return 0;
}