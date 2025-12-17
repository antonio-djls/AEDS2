#include<iostream>
#include<new>
#include<string>



// class vetor{
//     public:
//         vetor(){
//             dados = new int[10];
//             for(int k = 0; k < 10; k++){
//                 dados[k] = k*k;
//             }
//         }
//         ~vetor(){
//             delete[] dados;
//         }
//         void printing(){
//             for(int k = 0; k < 10; k++){
//                 std::cout << dados[k] << std::endl;
//             }
//         }
//         void setar(int x, int valor){
//             dados[x] = valor;
//             std::cout << "Valor inserido " << dados[x] << std::endl;
//         }
//     private:
//         int* dados;

// };


// int main(){
//     vetor v1;
//     // v1.printing();
//     vetor v2 = v1;
//     v2.printing();
//     return 0;
// }

class vetor{
    public:  
        int *dados;
        vetor(){
            std::cout << "Construindo " << std::endl;
            dados = new int[10];
            for(int i = 0; i < 10; i++){
                dados[i] = i;
            }
        };
        ~vetor(){
            delete[] dados;
        }
        void mostrando(){
            for(int  i = 0; i < 10; i++){
                std::cout << dados[i] << std::endl;
            }
        };
        vetor(const vetor& x){
            // Implemetando deep copy
            std::cout << "Copiando " << std::endl;
            // int *aux = new int[10];
            dados = new int[10];
            for(int i = 0; i <  10; i++){
                dados[i] = x.dados[i];
            }
        }
        // Mesma coisa implementada acima 
        vetor& operator=( const vetor& x){
            // dados = new int[10];
            // for(int i = 0; i < 10; i++){
            //     dados[i] = x.dados[i];
                
            // }
            if(this != &x){
                delete [] dados;
                dados = new int[10];
                for(int i = 0; i < 10; i++){
                    dados[i] = x.dados[i];
                }
            }

            return *this;
        }

        void printando(){
            for(int k = 0; k <10 ; k++){
                std::cout << &dados[k] << "|" << dados[k] << std::endl;
            }
        }
};



int  main(){
    vetor v1;
    //vetor v2 = v1; // É mesma coisa que v2(v1);
    vetor v2(v1);
    std::cout << "Printando V1 \n";
    v1.printando();
    std::cout << "Printando V2 \n";
    v2.printando();

    return 0;
}


