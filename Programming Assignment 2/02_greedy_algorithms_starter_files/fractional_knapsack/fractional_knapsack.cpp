#include <iostream>
#include <vector>
using namespace std;


using std::vector;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;

  // write your code here
  double A[weights.size()];
  double V = 0;
  double W = capacity;
  double amount = 0;
  


  for (int i = 0; i < weights.size(); i++) {

    if (W == 0) {
      return V;
    }
    double maxRatio = 0;
    int indexOfMax = 0;
    for (int j = 0; j <weights.size(); j++) {
      double ratio = (double)values[j]/(double)weights[j];

      if (ratio > maxRatio) {
        maxRatio = ratio;
        indexOfMax = j;
      }

    }

    if (weights[indexOfMax] < W) {
      amount = weights[indexOfMax];
    }
    else {
      amount = W;
    }
    V = V + amount*maxRatio;
    values[indexOfMax] = 0;
    //A[i] = A[i] + amount;
    W = W - amount;
  }

  return V;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
