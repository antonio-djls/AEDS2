#include<iostream>
#include<functional>
typedef int(*operacoes)(int,int);

int add(int x, int y){
    return x + y;
}
int multiplicador(int x, int y){
    return x * y;
}

int main(){
    
    
    std::function<int(int,int)> operacao;
    
    // ponteiro de função para funções
    // operacoes operacao;
    // int(*operacao)(int,int);
    operacao = add;

    std::cout << operacao(2,3) << std::endl;
    // std::cout << add(2,3) << std::endl;
    std::cout << multiplicador(2,3) << std::endl;


    return 0;
}