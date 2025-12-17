#include<bitset>
#include<iostream>


using namespace std;


int main(){
    bitset<8> meu_bit;
    cout << meu_bit << endl;    
    meu_bit.set(2);
    meu_bit.flip(3);
    // meu_bit.reset();
    cout << meu_bit;
    return 0;

}
