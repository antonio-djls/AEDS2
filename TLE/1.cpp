#include <bits/stdc++.h>
#define ll long long
using namespace std;

int quant(ll int y){
    int count{},ans;
    while(y > 0){
        ans = y % 10; y/=10;
        if(ans != 0)count++;
    }
    return count;
}
int num_sorte(ll int j, int zeros){
    ll int inicio = j;
    int first{};
    while(j >0){
        j/=10;
        if(j < 10) first = j;
    } first++;
    long int ans = (first * (pow(10,zeros))) - inicio;
    return ans;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int x{};
    cin >> x;
    if(quant(x) == 1 && x < 100 ){
        cout <<  1 << endl;
    }else{
        if(quant(x) == 1 && x > 100) x++;
      cout << num_sorte(x,quant(x));
    }

    return 0;
}
