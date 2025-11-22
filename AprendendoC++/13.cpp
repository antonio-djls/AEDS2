#include<iostream>

int main(){
    int x = 7;
    int* ponteiro = &x;

    std::cout << "x armazena "<< x << std::endl;
    std::cout << "x endereço " << &x << std::endl;
    std::cout << "ponteiro" << ponteiro << std::endl;

    return 0;
}