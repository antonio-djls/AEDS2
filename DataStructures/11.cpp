#include<iostream>
#include<vector>
#include<string>
#define ll long long

using namespace std;

int main(){
    string input;
    ll int x{};
    ll int value = 0;
    cin >> x;
    vector<string> vetor;

    for(int i = 0 ; i < x; i++){
        cin >>  input;
        vetor.push_back(input);    
    }
  
    for(string c : vetor){
        if(c.find("++X")!= string::npos|| c.find("X++") != string::npos){
            // cout << c << endl;
            value+=1;
        }else if(c.find("--X") != string::npos|| c.find("X--") != string::npos){
            // cout << c << endl;
            value-=1;
        }
    }


    cout  << value << endl;

    return 0;
}