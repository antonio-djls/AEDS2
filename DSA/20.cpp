#include<iostream>
#include<new>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,string> hash_table;
    hash_table[1] = "Antonio";
    hash_table[2] = "José";
    hash_table[3] = "Gabriel";

    int chave{2};
    if(hash_table.find(chave) != hash_table.end()){
        cout << "Encontrado \n";
    }else{
        cout << "Não encontrado \n";
    }

    return 0;
}
