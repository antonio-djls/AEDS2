#include<iostream>
#include<array>


int main(){
    // int arr[] = {1,3,4};
    // int i = 0;
    // for(; i < 3; i= i+1){
    //     std::cout << arr[i] << std::endl;
    // }
    // for(;;){
    //     std::cout << "Hello world \n";
    // }
    // Loop Infinito Acima
    std::array<int,3> vetor{1,3,4};    
    // for(int k = 0; k < vetor.size(); k++){
    //     std::cout << vetor[k] << std::endl;
    // }

    // Loop baseado em range
    // for(int elemento: vetor){
    //     std::cout << elemento << std::endl;
    // }
    // for(auto elemento: vetor){
    //     std::cout << elemento  << std::endl;
    // }

    int contador{3};

    while(contador > 0){
        std::cout << contador << std::endl;
        --contador;
    }
    // while(true){
    //     std::cout << "print" << std::endl;
    // }
    contador = 3;
    do{
        std::cout << "contador" << std::endl;
        --contador;
    }while(contador > 0);
    return 0;
}