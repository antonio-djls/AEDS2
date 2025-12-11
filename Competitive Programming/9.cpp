#include<new>
#include<iostream>

using namespace std;

int main(){
    int *array =  new int[10];
    for(int i  = 0; i < 10; i++){
        array[i] =  i;
    }
    int length  =  sizeof(array)/  sizeof(int);
    cout << length;



    return 0;
}