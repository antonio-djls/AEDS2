#include<iostream>

using namespace std;

int fib(int target, int p1, int p2){
    cout <<  p1 << endl;
    if(target == 0){
        return p1 + p2;
    }else{
        fib((target - 1), p2, p1);
    }
}

int main(){
    int j = 4;
    cout << fib(20,0,1);

    return 0;
}
