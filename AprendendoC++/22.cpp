#include<iostream>
#include<new>


/*

    ALOCAÇÃO DINÂMICA DE VETORES EM C++

*/
int main(){
    int m{},n{};
    std::cin >> m >> n;
    int** matriz = new int*[n];
    

    for(int i = 0; i < n; i++){
        matriz[i] = new int[n];
    }
    for(int u = 0; u < m; u++){
        for(int i = 0; i < n; i++){
            matriz[u][i] = u;
        }
    }
    for(int u = 0; u < 5; u++){
        for(int k = 0; k < 5; k++){
            std::cout  << matriz[u][k] << " ";
        }
        std::cout << std::endl;
    }
    for(int u = 0; u < m; u++){
        delete[] matriz[u];
    }
    delete[] matriz;
    return 0;
}   