#include<bits/stdc++.h>

using namespace std;

// int mediana(int x, int y, int k);
// int cecntro(int tamanho,)
int main(){
    vector<int> v = {5,43,12,1,2};
    
    // if(v.size() % 2){;
    //     x = (x / 2);
    // }else{
    //     x =(x - 1) / 2;
    // }
    
    // cout << "Centro do Array " << x << "\n";
    // int res = (mediana(v.at(0), v.at(centro), v.at((v.size() - 1))));
    // cout << "Mediana do array inserido  " << res  << "\n";
    
    return 0;
}



int mediana(int x, int y, int k){
    int median{};
    
    int *array = new int[3];
    
    array[0] = x;  array[1] = y; array [2] = k;

    for(int k = 1; k < 3; k++){
        int chave = array[k];
        int i = k - 1;
        while(i >= 0 && array[k] > chave){
            swap(array[k], array[k]);
            --i;
        }
        i  = k + 1;
    }
    cout << array[0] << " " << array[1] << " " << array[2] << " ";
    median = array[1];
    return median;
}
