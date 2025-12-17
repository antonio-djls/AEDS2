#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// Funções comparativas

bool comparar(string s1, string s2){
    if(s1.size() != s2.size()) return s1.size() < s2.size();
    return s1 < s2;
}

int main(){
    string name = "Antonio";
    string name_1 = "Diniz";
    cout << comparar(name,name_1) << endl;
    return 0;
}