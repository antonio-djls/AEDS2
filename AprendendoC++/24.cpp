#include<iostream>
#include<memory>

class UDT{
    public:
        UDT(){std::cout << "UDT criado"  << std::endl;}
        ~UDT(){std::cout << "UDT destruído" << std::endl;}
};

int main(){
    std::unique_ptr<UDT> antonio = std::unique_ptr<UDT>(new UDT);
    
    
    return 0;
}