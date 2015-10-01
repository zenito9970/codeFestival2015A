#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
#define int long long
using namespace std;

bool check(int N, int M, int *X, int k);

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N, M, *X, maxim, mini = 1, k;
	cin >> N >> M;
	X = new int[M];
	REP(i, M) {
		cin >> X[i];
	}
	if(N == M) {
		cout << 0 << endl;
		flush(cout);
		return 0;
	}
	maxim = (int)ceil(N * 1.5);

	while(mini < maxim) {
		k = (mini + maxim) / 2;
		if(check(N, M, X, k)) {
			maxim = k;
		} else {
			mini = (mini == k) ? mini + 1 : k;
		}
	}
	cout << mini << endl;
	flush(cout);
	return 0;
}

bool check(int N, int M, int *X, int k) {
	int l = 1, r;
	REP(i, M) {
		if(l + k < X[i]) return false;
		if(i != M - 1)
			r = min(X[i + 1] - 1, max((k - (X[i] - l)) / 2, k - 2 * (X[i] - l)) + X[i]);
		else r = max((k - (X[i] - l)) / 2, k - 2 * (X[i] - l)) + X[i];
		if(N <= r) return true;
		l = r + 1;
	}
	return false;
}
