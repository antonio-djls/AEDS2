#include<iostream>
#include<new>
#include<memory>

using namespace std;


int main(){
    
    shared_ptr<int> p1(new int);

    weak_ptr<int> p2(p1);

    cout << "P1 " << p1 << endl;
    // p1.reset();    Deletando o ponteiro que tinha alocado
    cout << "P2 "<< p2.expired() << endl;
    return 0;
}
