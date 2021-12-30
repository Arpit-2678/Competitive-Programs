//  LINK=https://codeforces.com/contest/1616/problem/B


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
	string str;
	cin >> str;

	int i = 0;
	string res;

	if (n == 1) {
		cout << str << str << "\n";
		return ;
	}
	if (str.at(0) == 'a') {
		cout << "aa\n";
		return;
	}
	if (str.at(0) == str.at(1)) {
		cout << str.at(0) << str.at(1) << "\n";
		return;
	}

	res.pb(str.at(i));
	i++;

	for (; i < n; i++) {
		char ch = str.at(i);

		if (ch == res.back() or res.back() > ch) {
			res.pb(ch);

		}
		else {
			break;
		}
	}
	i--;
	for (; i >= 0; i--)
		res.pb(str.at(i));
	cout << res << "\n";











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
	cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}



