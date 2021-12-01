//  LINK=https://codeforces.com/contest/1613/problem/A


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


int numberofdigits(int num)
{
	int cnt = 0;
	while (num != 0)
	{
		cnt++;
		num /= 10;
	}
	return cnt;
}

void solve() {

	int x1, p1, x2, p2;
	cin >> x1 >> p1 >> x2 >> p2;

	int nod_x1 = numberofdigits(x1) + p1;
	int nod_x2 = numberofdigits(x2) + p2;

	if (nod_x1 > nod_x2)
		cout << ">\n";
	else if (nod_x2 > nod_x1)
		cout << "<\n";
	else {

		std::vector<int> v1, v2;
		while (x1 != 0 ) {
			v1.pb(x1 % 10);
			x1 /= 10;
		}
		while (x2 != 0 ) {
			v2.pb(x2 % 10);
			x2 /= 10;
		}

		reverse(helper(v1));
		reverse(helper(v2));

		// op(v1)
		// cout << "\n";
		// op(v2)
		// cout << "\n";

		int i = 0;
		int limit = min(v1.size(), v2.size());
		bool flag = true;
		while (i < limit)
		{
			if (v1[i] > v2[i])
			{
				cout << ">\n";
				flag = false;
				break;
			}
			else if (v2[i] > v1[i])
			{
				cout << "<\n";
				flag = false;
				break;
			}
			i++;
		}

		while ( flag and i < v1.size())
		{
			if (v1[i] != 0) {
				cout << ">\n";
				flag = false;
				break;
			}
			i++;
		}

		while (flag and i < v2.size())
		{
			if (v2[i] != 0) {
				cout << "<\n";
				flag = false;
				break;
			}
			i++;
		}
		if (flag)
			cout << "=\n";

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
	cin >> t;

	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

	return 0;

}
