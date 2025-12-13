#include<iostream>
// Fibonacci com Recursão
using namespace std;

int fib(int x){
    if( x <= 1) return x;
    else return fib( x - 1) + fib(x - 2);
}


int main(){

    cout << fib(19);

    return 0;
}