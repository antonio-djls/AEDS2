#include<iostream>

int main(){
    int x = 10;
    int *ponteiro = &x;
    std::cout << "x " << x << std::endl;
    *ponteiro = 11;
    std::cout << "ponteiro e  x" << *ponteiro  << x << std::endl;

    return 0;
}