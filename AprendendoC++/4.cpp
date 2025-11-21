#include<iostream>


int main(){
    
    for(int u = 0; u < 10; u++){
        break;
        std::cout << "inicio do loop" << std::endl;
        continue;
        /// O continue faz o loop retornar ao início, nãao mostrando a variável abaixo
        std::cout << u << std::endl;
    }


    return 0;
}