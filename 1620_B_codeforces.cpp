//  LINK=https://codeforces.com/contest/1620/problem/B


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

	int width, height;
	cin >> width >> height;

	vector<int>v1, v2, v3, v4;
	int nn = 4;
	int cnt = 0;
	while (nn--)
	{
		int k;
		cin >> k;
		int val;
		cnt++;
		while (k--)
		{
			cin >> val;

			switch (cnt) {
			case 1: v1.push_back(val);
				break;
			case 2: v2.push_back(val);
				break;
			case 3: v3.push_back(val);
				break;
			default: v4.push_back(val);
			}

		}
	}

	int answer1 = (v1.back() - v1.front()) * 1LL * height;
	int answer2 = (v2.back() - v2.front()) * 1LL * height;
	int answer3 = (v3.back() - v3.front()) * 1LL * width;
	int answer4 = (v4.back() - v4.front()) * 1LL * width;

	cout << max(max(answer1, answer2), max(answer3, answer4)) << "\n";
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



