#include<iostream>


class vetor{
    public:
        float x,y,z;
        vetor(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        };
        // friend std::ostream& operator<<(std::ostream& os, const vetor& objeto){
        //     os << objeto.x << " " << objeto.y << " "  <<objeto.z;
        //     return os;
        // };
};


    std::ostream& operator<<(std::ostream& os, const vetor& objeto){
            os << objeto.x << " " << objeto.y << " "  <<objeto.z;
            return os;
        };

        
int main(){
    vetor v1;
    std::cout <<  v1 << std::endl;
    return 0;
}