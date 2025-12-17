#include<iostream>


class vetor{
    public: 
        float x,y,z;

};

int main(){
    
    vetor meu;
    meu.x = 1.0f;
    meu.y = 2.0f;
    meu.z = 3.0f;
    vetor meu2 = meu;
    
    std::cout << "Vetor.x " << meu.x << std::endl;
    std::cout <<  "Vetor.y " << meu.y << std::endl;
    std::cout <<  "Vetor.z "<< meu.z << std::endl;
    std::cout << "Vetor.x " << meu2.x << std::endl;
    std::cout <<  "Vetor.y " << meu2.y << std::endl;
    std::cout <<  "Vetor.z "<< meu2.z << std::endl;
    std::cout << &meu2 << " " << &meu << std::endl;
    
    return 0;
}