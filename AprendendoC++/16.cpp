#include<iostream>
#include<new>


// int* alocar_memoria(){
//     return new int;
// }

int main(){
    // int* x = alocar_memoria();
    // int estudantes[100];
    int* estudantes = new int[100];
    // Não consigo alocar em tempo de execução
    for(int i = 0; i <= sizeof(estudantes); i++){
        estudantes[i] = i;
        std::cout << estudantes[i] << std::endl;
    }

    delete[] estudantes;
    return 0;
}