#include<iostream>
#include<vector>
#include<string>
#define ll long long 

using namespace std;


int main(){
    vector<ll int> v;
    vector<string> resp;
    ll int x{};
    ll int a{}, b{},c{};
    cin >> x;
    for(int  i = 0; i < x ; i++){
        string res = "NO";
        cin  >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        ll int sum1 = b + c;
        ll int sum2 = a + b;
        ll int sum3 =  a + c;
        for(auto  num : v){
            if((num == sum1) || (num == sum2) || (num == sum3)){
                res = "YES";
            }
        }
        if (i== 0) cout << endl;
        cout << res << endl;
        // resp.push_back(res);
    }
    


    return 0;
}