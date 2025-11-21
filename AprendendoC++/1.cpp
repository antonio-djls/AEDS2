#include<iostream>
#include<math.h>
#include<numeric>
#include<iterator>
#include<array>

int main(){
    // int array[100];
    
    std::array<int,100> ids;
    
    std::iota(std::begin(ids), std::end(ids),10);
    ids.at(99) = 29;
    for(int k = 0;  k <100; k++){
        std::cout << ids[k] << std::endl;
    }
    return 0;
}