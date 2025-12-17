#include<set>
#include<iostream>

using namespace std;

int main(){
    set<int> s{2,4,5,8,9}; // somente um número
    multiset<int> s2 {2,4,5,8,9}; // pode repetir números
    cout << s.size() << endl;
    s.insert(5);
    cout << s.size() << endl;
    s.erase(2); // elimina todos números 2 do set
 

    return 0;
}