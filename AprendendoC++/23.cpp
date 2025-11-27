#include<iostream>
#include<new>


int main(){
    int x = 42;
    int *ponteiro = &x;

    std::cout << "ponteiro " << *ponteiro << " " << ponteiro << std::endl;
    int* ponteiro2 = ponteiro;
    std::cout <<  "Segundo ponteiro "<< ponteiro2 << std::endl;
    // int* array =  new int[100];
    
    // for(int u = 0; u < 100; u++){
    //     array[u] = u;
    // }
    // for(int u = 0; u < 100; u++){
    //     std::cout << &array[u] << std::endl;
    // }
    return 0;
}