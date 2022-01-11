// LINK=https://codeforces.com/problemset/problem/282/B


#include<bits/stdc++.h>
using namespace std;

// #define ll long long int
#define int long long int
#define pb push_back
#define xxx exit(0)
#define ain(arr) for (auto &it : arr) cin >> it;
#define op(container) for(auto it: container)  cout<<it<<" ";
#define clr  cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define sortv(arr) sort(arr.begin(),arr.end())
#define sorta(arr,n) sort(arr,arr+n)
#define helper(arr) arr.begin(),arr.end()
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

const int inf = 1e9 + 7;


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}




void solve() {

	int n;
	cin >> n;

	int sum_a = 0, sum_g = 0, diff = 0, sum = 0;
	int a, b;
	char ch = 'A';
	cin >> a >> b;
	if (a < b) {
		ch = 'A';
		sum_a += a;

	}
	else {
		ch = 'G';
		sum_g += b;
	}
	cout << ch;
	n -= 1;
	while (n--) {

		cin >> a >> b;

		if (ch == 'A') {
			sum_a += a;

			diff = abs(sum_a - sum_g);
			if (diff >= 500) {
				ch = 'G';
				cout << ch;
				sum_a -= a;
				sum_g += b;
			}
			else
				cout << ch;
		}
		else {
			sum_g += b;

			diff = abs(sum_a - sum_g);
			if (diff >= 500) {
				ch = 'A';
				cout << ch;
				sum_g -= b;
				sum_a += a;
			}
			else
				cout << ch;

		}

	}

}



signed main(int argc, char const * argv[])
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}



