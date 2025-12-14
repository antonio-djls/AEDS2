#include<set>
#include<iostream>

using namespace std;

// int main(){
//     set<int> s;

//     s.insert(12);
//     cout << s.count(12) << "\n";   
//     s.insert(2);
//     s.insert(31);

//     cout << "Showing the set \n";
//     for(auto num : s){
//         cout << num << endl;
//     }
//     return 0;
// }
int main(){
    set<int> s;
    s.insert(12); s.insert(2); s.insert(2);

    s.erase(2);
    // s.erase(s.find(2));
    for(int num : s){
        cout << num << endl;
    }

    return 0;
}