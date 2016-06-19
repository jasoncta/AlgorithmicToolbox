#include <iostream>

int get_change(int n) {
  //write your code here
	int ten = n/10;
	int remainderTen = n%10;
	int five = remainderTen/5;
	int remainderFive = remainderTen%5;
	int one = remainderFive;

  return ten + five + one;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}
