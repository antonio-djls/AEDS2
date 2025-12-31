#include<iostream>
#include<vector>

using namespace std;

void update(vector<int>& diff, int l, int r,int x){
    diff[l] +=x;
    if(r+1 < diff.size()){
        diff[r+1] -= x;
    }
}

vector<int> diffarray(vector<int>& array, vector<vector<int>>& operar){
    int n =  array.size();

    vector<int> diff(n,0);

    for(auto& q: operar){
        int l = q[0], r = q[1], val = q[2];
        update(diff,l,r,val);

    }
    vector<int> res = array;
    res[0] += diff[0];

    for(int i  = 0; i < n; i++){
        diff[i]+=diff[i-1];
        res[i]+= diff[i];
    }
    return res;
}



int main(){
    vector<int> array = {1,2,3,4,5};
    vector<vector<int>> operar = { {1,3,10},{2,4,-5}};

    vector<int> ans = diffarray(array,operar);

    for(int num : ans){
        cout << num << endl;
    }
    cout << endl;

    return 0;
}
