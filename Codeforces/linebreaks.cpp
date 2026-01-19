#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x{}; cin >> x;
    string input;

    while(x--){
        vector<string> vi;
        int qtd{}; cin >>  qtd; int size{}; cin >> size;
        for(int i = 0; i < qtd; i++){
            cin >> input; vi.push_back(input);
        }
        int sum = 0; int count =  0;
        for(int i = 0; i < vi.size(); i++){
            if(sum + vi[i].size() > size){
                break;
            }
            sum += vi[i].size();
            count++;
        }
        cout << count << endl;



    }

    return 0;
}
