#include <iostream>

using namespace std;

int f(int n, int b) {
	if (0 != n % b) {
		return 0;
	}

	auto ret = int{ 1 };
	n /= b;
	while (0 == n % b) {
		ret += 1;
		n /= b;
	}

	return ret;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;

		auto sum = int{ 0 };
		for (int b = 2; b <= n; ++b) {
			sum += f(n, b);
		}

		cout << sum << '\n';
	}

	return 0;
}