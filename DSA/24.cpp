#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

/*
    Implemetando Busca Binária

*/

// int main(){
//     vector<int> v1 = {1,2,15,3};
//     int procurado{15};
//     for(int i = 0; i < v1.size(); i++){
//         if(v1[i]  ==  procurado){
//             cout << "Encontrado \n";
//         }
//     }


//     return 0;
// }
int main(){
    vector<int> v = {12,1,21,2,33,8,15};
    sort(v.begin(), v.end());
    int procurado{};
    cin >> procurado;
    int a{}, b = v.size() - 1;
    while(a <= b){
        int meio = (a + b)/ 2;
        if(v[meio] == procurado) cout << "Número encontrado " << procurado;
        if(v[meio] > procurado) b = meio - 1;
        else b = meio + 1;

    }

    return 0;
}