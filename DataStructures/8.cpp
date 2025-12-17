#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(5);
    d.push_back(3);

    for(auto x : d){
        cout << x << endl;
    }
    // Consigo tirar elementos em ambos os lados
    // Possui uma complexidade maior que um Vetor, mas em termos de complexidade de tempo O(1)
    d.pop_back();
    d.pop_front();
    return 0;
}