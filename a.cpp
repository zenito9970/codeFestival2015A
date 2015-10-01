#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  FOR(i,0,n)
using namespace std;
const double PI = acos(-1.0);

int main() {
	string str;
	cin >> str;
	str[str.size() - 1] = '5';
	cout << str << endl;
}
