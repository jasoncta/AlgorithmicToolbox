#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h> 

using std::vector;

long long min_dot_product(vector<int> a, vector<int> b) {
  std::sort(a.begin(), a.end(), std::greater<int>());
  std::sort(b.begin(), b.end());
  
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += (long long) a[i] * b[i];
  }
  return result;
}

long long min_dot_productA(vector<int> a, vector<int> b) {
  // write your code here
  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    int max = -10000000;
    int min = 10000000;
    int indexA = 0;
    int indexB = 0;

    for (size_t j = 0; j < a.size(); j++) {
      int tempA = a[j];
      int tempB = b[j];

      // Find max
      if (tempA > max) {
        max = tempA;
        //std::cout << "tempA" << tempA << "max" << max << std::endl;
        indexA = j;
      }

      // Find min
      if (tempB < min) {
        min = tempB;
        //std::cout << "tempB" << tempB << "min" << min << std::endl;
        indexB = j;
      }
    }
    //std::cout << "result: " << result << " + " << a[indexA] << " * " << b[indexB] << std::endl;
    result += a[indexA] * b[indexB];

    a[indexA] = -10000000;
    b[indexB] = 10000000;

    //result += a[indexA] * b[indexB];
  }
  return result;
}

int main() {

/*
  while (true) {
    int n = rand() % 1000000 + 2;
    std::cout << n << "\n";
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; ++i) {
      a.push_back(rand() % 100000);
      b.push_back(rand() % 100000);
    }
    for (int i = 0; i < n; ++i) {
      std::cout << a[i] << ' ';
      std::cout << b[i] << ' ';
    }
    std::cout << "\n";
    long long res1 = min_dot_productA(a, b);
    long long res2 = min_dot_product(a, b);
    if (res1 != res2) {
      std::cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
      break;
    }
    else {
      std::cout << "OK\n";
    }
  }
  */



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
