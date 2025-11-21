#include<iostream>


float add(float a,float b){
    return a + b;
}

int add(int a,int b){
    return a + b;
}

int main(){
    std::cout << add(2,3) << std::endl;
    std::cout << add(2.2f,4.4f) << std::endl;
    return 0;
}