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

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N, T, addA = 0, addB = 0;
	int *A, *B, *x;

	cin >> N >> T;
	A = new int[N];
	B = new int[N];
	REP(i, N) {
		cin >> A[i] >> B[i];
	}
	REP(i, N) {
		addA += A[i];
		addB += B[i];
	}
	if(addA <= T){
		cout << 0 << endl;
		return 0;
	} else if(addB > T) {
		cout << -1 << endl;
		return 0;
	}
	x = new int[N];
	REP(i, N) {
		x[i] = A[i] - B[i];
	}
	sort(x, x + N, greater<int>());
	REP(i, N) {
		addA = addA - x[i];
		if(addA <= T) {
			cout << i + 1 << "\n";
			return 0;
		}
	}
	flush(cout);
	return 0;
}
