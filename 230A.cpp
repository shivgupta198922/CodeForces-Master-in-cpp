/*
 ~ Author    : @tridib_2003
*/

#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007
#define vi                  vector<int>
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(a, c)           for (int(a) = 0; (a) < (c); (a)++)
#define w(x)                int x; cin >> x; while(x--)
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve() {

	int s, n;
	cin >> s >> n;

	vector<vector<int> > arr(n, vector<int> (2));

	FOR (i, n) {
		cin >> arr[i][0] >> arr[i][1];
	}

	sort(arr.begin(), arr.end());

	FOR (i, n) {
		if (arr[i][0] >= s) {
			cout << "NO";
			return;
		}
		s += arr[i][1];
	}

	cout << "YES";
}

int main() {

	FIO;

	int tc = 1;
	// cin >> tc;
	while (tc--) {

		solve();
		// cout << '\n';
	}

	return 0;
}
