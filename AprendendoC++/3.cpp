#include<iostream>
#include<algorithm>
#include<array>

int main(){

    std::array<int,3> vetor;
    
    // Consigo preencher todo o vetor com o mesmo valor
    std::fill(std::begin(vetor),std::end(vetor),1024);
    
    for(int elemento : vetor){
        std::cout << elemento << std::endl;
    }

    return 0;
}