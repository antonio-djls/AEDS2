#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool busca_binaria(vector<int> vi, int x){
    int right =  vi.size()-1;
    int left = 0;
    int meio = 0;
    while(left <= right){

        meio = right + left/2;

        if(vi[meio] == x){
            cout << "valor achado" << endl;
            return true;
        }
        if(vi[meio] > x){
            right = meio-1;
        }else if(vi[meio] < x){
            left = meio+1;
        }

    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y{}; cin >> y;
    vector<int> arr = { 2, 3, 4, 10, 40 };
    busca_binaria(arr,y);
    return 0;
}
