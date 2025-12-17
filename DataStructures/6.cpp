#include<iostream>
#include<set>


using namespace std;


int main(){
    set<int> v = {2,1,3};
    int x = 2;
    // auto it = v.find(x);
    // if(it == v.end()){
    //     cout << "true \n";
    // }
    // if(it == v.begin()) cout << "false begin \n";
    auto it = v.lower_bound(x);
    if(it == v.begin()){
        cout << *it << endl;
    }else if(it == v.end()){
        it--;
        cout << *it << endl;
        
    }else{
        int a = *it; it--;
        int b = *it;
        if(x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }




    return 0;
}