#include <iostream>

int gcd(int a, int b) {
  //write your code here
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int EuclidGCD(int a, int b) {
  if (b == 0) {
    return a;
  }
  int aa = a%b;
  return EuclidGCD(b, aa);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  //std::cout << gcd(a, b) << std::endl;
  std::cout << EuclidGCD(a, b) << std::endl;
  return 0;
}
