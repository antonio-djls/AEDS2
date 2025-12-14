#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int calcularMDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b; // Calcula o resto da divisão de 'a' por 'b'
        a = b;         // 'a' recebe o valor de 'b'
        b = resto;     // 'b' recebe o valor do resto
    }
    return a; // Quando b for 0, 'a' será o MDC
}


int main(){
   
    cout << calcularMDC(3,15) << endl;
    return 0;
}