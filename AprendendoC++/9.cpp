#include<iostream>

// Testando ponteiros e passagem por referência 
int sum(int x, int l){
    return x+l;
}

int main(){
    int y{20};
    int& c = y;
    int k{30};
    int& j = k;
    std::cout << sum(j,c) << std::endl;
    std::cout << "Endereço de C e Y " << &c <<  "\n" << &y << std::endl;
    std::cout << "Endereço de J e K "<< &j << "\n" << &k << std::endl;
    return 0;
}