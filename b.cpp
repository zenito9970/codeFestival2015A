#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
	int N, a, ans = 0;
	vector<int> A;

	cin >> N;
	REP(i, N) {
		cin >> a;
		A.push_back(a);
	}
	REP(i, N - 1) {
		ans += A[i] * pow(2, N - i - 1);
	}
	ans += A[N - 1];

	cout << ans << endl;
}
