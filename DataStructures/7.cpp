#include<iostream>
#include<bitset>

using namespace std;

int main(){
    bitset<10> v;
    v[1] = 1;
    cout << v[1] << endl;

    bitset<5> s(string("01011"));
    cout << s << endl;
    return 0;
}