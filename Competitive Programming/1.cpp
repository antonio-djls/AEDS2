#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> vetor = {1, 3, 8, 2, 9, 2, 5, 6};

  for (int k = 0; k < vetor.size(); k++) {
    for (int j = k + 1; j < vetor.size(); j++) {
      if (vetor[k] > vetor[j]) {
        swap(vetor[k], vetor[j]);
      }
    }
  }
  for (auto inteiro : vetor) {
    cout << inteiro << endl;
  }
  for (int k = 0; k < 10; k++) {
    cout << "Antonio Diniz Jorge lima Saraiva \n";
  }

  return 0;
}
