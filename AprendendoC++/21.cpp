#include<iostream>
#include<string>



int main(){
    std::string a = "Antonio";
    std::string b = std::move(a);
    std::cout << "String B: " << b << std::endl;
    return 0;
}
