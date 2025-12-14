// Codeforces 59 A - Word

#include<iostream>
#include<string>

using namespace std;


void baixo(string name){
        for(char &c : name){
            c = tolower((c));
        }
        cout << name << endl;
    }
void alto(string name){
    for(char &c : name){
        c = toupper((c));
    }
    cout << name << endl;
}

int main(){
    long int up{},lw{};
    string name;
    cin >> name;

    for( char c : name){
        if(c == toupper(c)){
            ++up;
        }else{
            ++lw;
        }
    }

    if(up == lw){
        baixo(name);
        return 0;
    }
    if(up > lw){
        alto(name);
        return 0;
    }else if(lw > up){
        baixo(name);
        return 0;
    }
    
    return 0;
}