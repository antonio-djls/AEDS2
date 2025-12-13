#include<iostream>



using namespace std;


int main(){
    int menor{0};
    int *array = new int[5];
    array[0] = 7;
    array[1] = 12;
    array [2]= 9;
    array[3] = 4;
    array[4] = 11;


    for(int n = 0; n < 5; n++){
        if(array[n] < array[menor]){
            menor = n;
        }
    }
    cout << "Menor valor encontrado " << array[menor] << endl;
    return 0;
}