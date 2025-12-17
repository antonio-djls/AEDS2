#include<iostream>
#include<queue>

using namespace std;

int main(){ 
    // Fila

    queue<int> q;
    q.push(2);
    q.push(3);
    q.pop();
    cout << q.back();


    return 0;
}