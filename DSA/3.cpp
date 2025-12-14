#include <iostream>
using namespace std;

int main(){
  long long int x{};
  long long int i{5};
  long long int sum {};
  cin >> x;
  
  while(i <= 5 && x > 0){
      if(x >= i){
          ++sum;
          x = x - i;
          if(x < i){
              i--;
          }
      }else{
          i--;
      }
  }

  cout << sum;
  return 0;
}
