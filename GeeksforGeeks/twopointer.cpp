#include <bits/stdc++.h>
#define ll long long
using namespace std;


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     vector<int> vi = {10, 20, 35, 50};
//     int x{};  cin >> x;

//     for(int i  = 0; i < vi.size(); i++){
//         for(int j = 1; j < vi.size(); j++){
//             if(vi[i] + vi[j] == x){
//                 cout << "true" << endl;
//                 return 0;
//             }
//         }
//     }
//     cout << "False" << endl;
//     return 0;
// }

int main(){
    // considerando o vetor estar ordenado
    vector<int> vi = {10, 20, 35, 50};

    int x{}; cin >> x;
    int esquerda{},direita = vi.size()-1;


    while(esquerda < direita){
        if(vi[esquerda]+vi[direita] < x){
            esquerda++;
        }
        if(vi[esquerda] + vi[direita]> x){
            direita--;
        }
        if(vi[esquerda] + vi[direita] == x){
            cout << "true" << endl;
            return 0;
        }
    }
    cout << "False"<< endl;


    return 0;
}
