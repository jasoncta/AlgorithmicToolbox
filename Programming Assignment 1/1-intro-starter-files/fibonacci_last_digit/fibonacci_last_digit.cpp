#include <iostream>

int get_fibonacci_last_digit(int n) {
  //write your code here
	int arr [n];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = (arr[i-1] + arr[i-2]) % 10;
	}
  return arr[n];
}

int main() {
  int n;
  std::cin >> n;
  int c = get_fibonacci_last_digit(n);
  std::cout << c << '\n';
}
