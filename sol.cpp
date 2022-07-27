#include <bits/stdc++.h>
using namespace std;

//int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int dx[4] = {1, 0, -1, 0};
//int dy[4] = {0, 1, 0, -1};

//int dx[4] = {-1, -1, 1, 1};
//int dy[4] = {-1, 1, -1, 1};

void test_cases() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if(a[n-1] < a[n-2]) {
		cout << "-1\n";
		return;
	}
	if(is_sorted(a.begin(), a.end())) {
		cout << "0\n";
		return;
	}
	if(!is_sorted(a.begin(), a.end()) && a[n-1] < 0 && a[n-2] < 0) {
		cout << "-1\n";
		return;
	}
	cout << n - 2 << "\n";
	for(int i = 0; i < n - 2; i++) {
		cout << (i + 1) << " " << n - 1 << " " << n << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for(int tc = 1; tc <= T; tc++) {
		test_cases();
	}
}
