#include<iostream>

int contador(int n){
    //1. caso base
    if(n == 0){
        std::cout << "0..." << std::endl;
        return 0;
    }
    std::cout << n << std::endl;
    return contador(n-1);
}
int main(){
    contador(5);

    return 0;
}