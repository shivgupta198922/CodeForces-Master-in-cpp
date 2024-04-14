/*
 ~ Author    : @tridib_2003
*/

#pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

#define int                 long long
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007 // 998244353
#define vi                  vector<int>
#define vb                  vector<bool>
#define vvi                 vector<vector<int> >
#define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
#define mp(a, b)            make_pair(a, b)
#define pii                 pair<int, int>
#define vpii                vector<pair<int, int> >
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define print(a)            cout << a << '\n'
#define rsort(a)            sort((a).rbegin(), (a).rend())
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define lwr_b(c, a)         lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a)         upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int INF = 1e9 + 7;
const int MAXN = 1e3 + 5;

vi opsCnt;

void precompute() {
	opsCnt.resize(MAXN, INF);
	opsCnt[1] = 0;

	FOR (i, 1, MAXN) {
		FOR (x, 1, i + 1) {
			if (i + (i / x) < MAXN) {
				opsCnt[i + (i / x)] = min(opsCnt[i + (i / x)], opsCnt[i] + 1);
			}
		}
	}
}

void solve() {
	int n, k;
	cin >> n >> k;

	vi ops(n);

	FOR (i, 0, n) {
		int b;
		cin >> b;

		ops[i] = opsCnt[b];
	}

	vi c(n);

	FOR (i, 0, n) {
		cin >> c[i];
	}

	int m = min(12 * n, k);

	vi dp(m + 1, 0);

	FOR (i, 0, n) {
		RFOR (j, m + 1, 1) {
			if (ops[i] <= j)
				dp[j] = max(dp[j], c[i] + dp[j - ops[i]]);
		}

		if (ops[i] == 0)
			dp[0] += c[i];
	}

	cout << dp[m];
}

int32_t main() {

	FIO;

	precompute();

	int tc = 1;
	cin >> tc;
	while (tc--) {
		solve();
		cout << '\n';
	}

	return 0;
}
