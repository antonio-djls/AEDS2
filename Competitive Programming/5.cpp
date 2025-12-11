// Codeforces 1829 A. Love Story

#include<iostream>
#include<vector>
#include<string>


using namespace std;



int main(){
    long int x{},res{};
    vector<string> words{};
    string str;
    string code = "codeforces";
    string palavra{};
    cin >> x;
    
    while(x > 0){
        cin >> str;
        words.push_back(str);
        --x;
    }
    for(int i = 0; i < words.size();i++){
        palavra = words.at(i);
       for(int k = 0; k < 10; k++){
            if(palavra[k] != code[k]) ++res;
       }
       cout << res << endl;
       res = 0;
    }
    return 0;
}