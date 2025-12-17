#include<iostream>
#include<new>
#include<memory>

using namespace std;

int main(){
    shared_ptr<int> p1(new int);
    shared_ptr<int> p2;
    cout << p1 << endl;
    *p1 = 2;
    p2 = p1;
    cout << "P2 " << *p2 << endl;
    *p1 = 3;
    *p2 = 4;
    cout << "P2 " << *p2 << endl;
    cout << "P1 " << *p1 << endl;
    
    return 0;
}