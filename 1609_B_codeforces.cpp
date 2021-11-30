 // LINK=https://codeforces.com/contest/1609/problem/B

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
	int n, q;
	cin >> n >> q;
	string str;
	cin >> str;
	unordered_set<int>ust;

	for (int i = 0; i < str.size(); i++)
	{
		char ch = str.at(i);
		if (ch == 'a' and i + 2 < n) {
			if (str.at(i + 1) == 'b' and str.at(i + 2) == 'c')
				ust.insert(i);
		}
	}

	while (q--) {
		int pos;
		char ch;

		cin >> pos >> ch;
		pos -= 1;

		if (ust.find(pos) != ust.end())
			ust.erase(pos);
		if (ust.find(pos - 1) != ust.end())
			ust.erase(pos - 1);
		if (ust.find(pos - 2) != ust.end())
			ust.erase(pos - 2);
		str.at(pos) = ch;
		if (ch == 'a')
		{
			if (pos + 2 < n and str.at(pos + 1) == 'b' and str.at(pos + 2) == 'c')
			{
				ust.insert(pos);
			}

		}
		else if (ch == 'b')
		{

			if (pos - 1 >= 0 and pos + 1 < n and str.at(pos - 1) == 'a' and str.at(pos + 1) == 'c')
			{
				ust.insert(pos - 1);

			}

		}
		else if (ch == 'c')
		{
			if (pos - 2 >= 0 and str.at(pos - 1) == 'b' and str.at(pos - 2) == 'a')
			{
				ust.insert(pos - 2);
			}

		}


		cout << ust.size() << "\n";

	}


}


signed main(int argc, char const *argv[])
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
