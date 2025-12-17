#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    string name = "Antonio";
    int a[] = {1,3,2};
    vector<int> v = {224,51,1,2,15};    
    vector<int> v1 ={1,2,3};
    sort(v.begin(),v.end()); // Ordenando Strings
    sort(name.begin(), name.end()); // Ordenando vetor
    sort(a,a+3);

    for(int num : v){
        cout << num << endl;
    }

    cout << name << endl;
    cout << "Mostrando array " << endl;
    for(int i = 0; i < 10; i++){
      cout << i << endl;
    } 
    for(int i = 0; i < 3; i++){
        cout << a[i] << endl;
    }
    return 0;
  
}
