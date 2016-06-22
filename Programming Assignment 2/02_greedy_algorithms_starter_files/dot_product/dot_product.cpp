#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h> 

using std::vector;

long long min_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    int max = pow(-11, 5);
    int min = pow(11, 5);
    size_t indexA = 0;
    size_t indexB = 0;

    for (size_t j = 0; j < a.size(); j++) {
      int tempA = a[j];
      int tempB = b[j];

      if (tempA > max) {
        max = tempA;
        //std::cout << "tempA" << tempA << "max" << max << std::endl;
        indexA = j;
      }

      if (tempB < min) {
        min = tempB;
        //std::cout << "tempB" << tempB << "min" << min << std::endl;
        indexB = j;
      }
    }

    result += a[indexA] * b[indexB];

    a[indexA] = pow(-11,5);
    b[indexB] = pow(11,5);

    //result += a[indexA] * b[indexB];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << min_dot_product(a, b) << std::endl;
}
