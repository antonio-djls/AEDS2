#include<iostream>

class vetor{
    public :
        float x,y,z;
    vetor(){
        x = 0.f;
        y = 0.f;
        z = 0.f;
    };

    friend bool operator==(const vetor& os, const vetor &copiado){
        // std::cout << "operator==" << std::endl;
        if(os.x == copiado.x && os.y == copiado.y && os.z == copiado.z){
            return true;
        }
        return false;
    };
};
int main(){
    vetor v1,v2;

    v1.x = 1.0f;
    v1.y = 2.0f;
    v1.z = 3.0f;
    v2.x = 1.0f;
    v2.y = 2.0f;
    v2.z = 3.0f;

    if(v1 == v2){
        std::cout << "Igual" << std::endl;
    }else{
        std::cout << "Diferentes" << std::endl;
    }
    return 0;
}