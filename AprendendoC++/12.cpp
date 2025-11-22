#include<iostream>


int main(){
    const int x = 1;
    std::cout << std::is_const_v<int> << std::endl;
    std::cout << "x" << x << std::endl;
    
    return 0;
}