#include <iostream>

int calc_fib_slow(int n) {
    if (n <= 1)
        return n;

    return calc_fib_slow(n - 1) + calc_fib_slow(n - 2);
}

int calc_fib(int n) {
	int arr [n];
	arr [0] = 0;
	arr [1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}

int main() {
    int n = 0;
    std::cin >> n;

    std::cout << calc_fib(n) << '\n';
    return 0;
}
