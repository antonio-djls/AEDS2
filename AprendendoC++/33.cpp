#include<iostream>


class vetor{
    public:
        float x,y,z;
        vetor(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        };
        vetor operator+(const vetor& vet){
            vetor teste;
            teste.x = x + vet.x;
            teste.y  = y + vet.y;
            teste.z = z + vet.z;
            return teste;
        };
      
};

int main(){
    vetor v1;

    v1.x  = 2.0f;
    v1.y =  3.0f;
    v1.z =  4.0f;
    vetor v2 = v2 + v1;
    // std::cout << v2.x << std::endl;
    // std::cout << v2.y << std::endl;
    // std::cout << v2.z << std::endl;
    return 0;
}