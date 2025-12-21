#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll int a{},b{};
    cin >> a >> b;

for(int i  = 0; i < b;i++){
    if(a % 10 == 0){
        a /=10;
    }else{
        a-=1;
    }
}
cout << a << endl;

return 0;
}
