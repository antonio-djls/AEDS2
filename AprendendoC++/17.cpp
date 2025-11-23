#include<iostream>

int main(){
    // Array =  bloco contínuo de Memória
    int array[] = {1,2,3,4};
    int *px = array;
    

    // std::cout << array[0] << std::endl;
    // std::cout << *px << std::endl;
    // px++;
    // std::cout << *px  << std::endl;
    std::cout << *px << std::endl;

    // Pegando cada valor do array por meio da adição do ponteiro
    for(int k = 0; k < 4; k++){
        std::cout << *(px+k) << std::endl;
    }
    return 0;
}