#include<iostream>


void print(){
    //nada
};

int main(){
    int x = 42;
    signed char b = 'b';

    // Endereço de Memória
    std::cout << "Endereço de X" << &x << std::endl;
    // std::cout << "tamanho de um inteiro" << sizeof(int) << std::endl;
    // std::cout << "tamanho do x " << sizeof(x) << std::endl;
    std::cout << "Endereço de B " << &b << std::endl;
    std::cout << (void*)&b  << std::endl;
    std::cout << "Endereço da função " << (void*)&print << std::endl;
    
    return 0;
}