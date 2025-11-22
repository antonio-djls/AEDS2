#include<iostream>
#include<vector>
#include<algorithm>

void referencia(std::vector<int>& alias){
    alias[0] = 15022006;
}
int main(){
    std::vector<int> x(10);
    std::fill(std::begin(x),std::end(x),10);
    
   
    referencia(x);
   
    for(auto elemento : x){
        std::cout << elemento << std::endl;
    }

    return 0;
}