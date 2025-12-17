#include<iostream>
#include<algorithm>
#include<vector>
#include<string>


using namespace std;


int main(){
    // vector<int> v{};
    //  cout << &v << endl;
    // v.push_back(12);

    // for(auto num: v){
    //     cout << num << endl;
    // }
    string nome = "Antonio";
    cout << nome[2] << endl;
    string nome2 = nome.substr(1,2); // captura o intervalo
    cout << nome2 << endl;
    return 0;
}
