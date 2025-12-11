#include<iostream>
#include<memory>

class UDT{
    public:
        UDT(){std::cout << "UDT criado"  << std::endl;}
        ~UDT(){std::cout << "UDT destruído" << std::endl;}
};

int main(){
    
    // Criando um único ponteiro
    std::unique_ptr<UDT> antonio = std::unique_ptr<UDT>(new UDT);
    // Criando um vetor que é referenciado por um unico ponteiro
    // std::unique_ptr<UDT[]> antonio_vetor = std::make_unique<UDT[]>(100);
    std::unique_ptr<UDT> outro = std::move(antonio);
    return 0;
}