#include<iostream>
#include<string>

using namespace std;

class estudantes{
    public:
    estudantes(){
        cout << " Construtor " << endl;
    }
    ~estudantes(){
        cout << "Destrutor " << endl;
    }
    private:
        string name;    
};

int main(){
    
    cout << "Iniciando " << endl;
    estudantes *antonio = new estudantes;
    delete antonio;
    cout << "Terminando " << endl;

    return 0;
}