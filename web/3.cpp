#include<iostream>

using namespace std;

int fatorial(int n){
    if (n > 1){
        return n * fatorial (n - 1);
    }else{
        return n;
    }
}

int main(){
    int x{4};
    cout << fatorial(4);
    return 0;
}