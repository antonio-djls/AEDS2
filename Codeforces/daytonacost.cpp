#include <bits/stdc++.h>


#define ll long long
using namespace std;


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);


//     vector<int> vi;
//     ll int x{};
//     cin >> x;

//     for(int u = 0; u < x; u++){

//         ll int y{},z{},a{};
//         cin >> y >> z;

//         for(int i = 0; i < y; i++){
//             cin >> a;
//             vi.push_back(a);
//         }

//         vector<int> vi2 = vi;
//         vector<int> ocur;
//         sort(vi.begin(), vi.end());


//         for(int i = 0 ; i < vi2.size(); i++){
//             for(int d = 0; d < vi.size(); d++){
//                 if(vi2[i] == vi[d]) ocur[d]+=1;
//             }
//         }

//         ll int mira = z;
//         auto indice =  find(vi2.begin(),vi2.end(),mira);
//         cout << "Indice " << *indice << endl;
//         ll int maior = 0;

//         for(int i = 0; i < ocur.size(); i++){
//             if(maior < ocur[i]){
//                 maior = ocur[i];            }
//         }
//         if(vi[*indice] != vi[maior]) cout << "NO" << endl;
//         else cout  << "YES" << endl;
//         vi.clear();
//         vi2.clear();
//         ocur.clear();
//     }



//     return 0;
// }

int main(){


    ll int x{};
    ll int a,b;
    cin >> x;
    for(int u = 0; u < x; u++){
        cin >> a >> b;
        ll int h{}, count{};
        for(int i  = 0 ; i < a ;i++){
            cin >> h;
            if(b == h) count++;
        }
        if(count) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}
