#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve_am(string& entrada, int dezena, int unidade){
     cout << entrada << " AM" << endl;
}

void solve_pm(string& entrada, int dezena , int unidade ){
    if((dezena+unidade) == 12){
        cout << entrada << " PM" << endl;

    }else{
    int ans = (dezena+unidade) - 12;
    if(dezena + unidade == 0){
        entrada[0] = 1 + '0'; entrada[1] = '2';
        cout << entrada << " AM" << endl;
    }else{
    for(int u = 1; u >= 0; u--){
        entrada[u] = (ans % 10) + '0';
        ans /=10;
    }
    cout << entrada << " PM" << endl;}}
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{}; cin >> x;
    string input{};
    while(x--){
        cin >> input;
        int dez = (input[0] - '0') * 10;
        int min = (input[1] - '0') * 1;
        if((dez+min) >= 12 || (dez+min) == 0){
            solve_pm(input,dez,min);
        }else{
            solve_am(input,dez,min);
        }
    }

    return 0;
}
