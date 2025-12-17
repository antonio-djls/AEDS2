#include<iostream>
#include<memory>
#include<new>


using namespace std;
int main(){
    unique_ptr<int> p1(new int);
    cout << p1.get() << endl;
    unique_ptr<int> p2 = move(p1);
    cout << p2.get() << endl;
    return 0;
}