#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		// calculate the sum using modulo equation for negative numbers
		sum = (((long long) sum + a % MOD) + MOD) % MOD;
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		// for every query, simply add the sum to itself while applying
		// the modulo equationfor negative numbers
		sum = (((long long) sum + sum % MOD) + MOD) % MOD;
		// output the current sum for every query
		cout << sum << '\n';
	}
	return 0;
}
