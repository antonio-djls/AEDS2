#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x = 1.124314512;
    cout << "Num" << endl;
    cout << floor(x) << endl; // arredonda o numero
    cout << ceil(x) << endl; // arredonda para cima
    cout << trunc(x) << endl; // remove os digitos depois do ponto decimal

    double y = 1.12312; double j = 1.5113123;
    //cout << trunc(y) << endl;
    cout << round(y) << endl; // Round arredonda para o número mais próximo
    cout << round(j) << endl;
    // Set precision define o numero de casas decimais a serem mostradas
    cout << fixed << setprecision(2) << y << endl;
    cout << fixed << setprecision(2) << j <<endl;
    return 0;
}
