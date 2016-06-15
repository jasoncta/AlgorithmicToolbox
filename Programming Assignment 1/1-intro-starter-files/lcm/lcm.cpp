#include <iostream>

long long EuclidGCD(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  long long aa = a%b;
  return EuclidGCD(b, aa);
}


long long lcm(long long a, long long b) {
  //write your code here
  return (a*b)/EuclidGCD(a, b);
}


int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
