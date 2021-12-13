// LINK=https://codeforces.com/contest/158/problem/B


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


	unordered_map<int, int>ump;
	int x;

	for (int i = 0; i < n; i++) {
		cin >> x;
		ump[x]++;
	}

	int cnt = 0;



	if (ump.find(4) != ump.end()) {
		cnt += ump[4];
		ump.erase(4);
	}

	if (ump.find(3) != ump.end()) {

		if (ump.find(1) == ump.end()) {
			//int three = ump[3] * 3;
			cnt += ump[3];
			ump.erase(3);
		}
		else {

			while (ump[3] > 0 and ump[1] > 0) {
				cnt += 1;
				ump[3]--;
				ump[1]--;
			}
			int three = ump[3];
			if (three > 0)
				cnt += three ;




			if (ump[1] <= 0)
				ump.erase(1);

		}
	}

	int rem_one = 0;
	if (ump.find(1) != ump.end()) {
		rem_one = ump[1] % 4;
		cnt += ump[1] / 4;
		ump.erase(1);
	}
	if (ump.find(2) != ump.end()) {
		int freq = ump[2] * 2;
		int pos = freq / 4;

		cnt += pos;

		freq %= 4;
		int rem_two = freq ;
		freq /= 2;

		if (rem_one > 0) {
			while (rem_one > 0 and freq > 0) {
				freq--;
				rem_one -= 2;
				cnt += 1;
			}
			if (freq > 0) {
				cnt += 1;
			}
			if (rem_one > 0) {

				cnt += rem_one / 4;
				if ((rem_one % 4) != 0) {
					cnt += 1;
					rem_one = 0;
				}
			}
		}
		else {
			if (rem_two != 0)
				cnt += 1;
		}


	}
	if (rem_one > 0)
		cnt += 1;

	cout << cnt << "\n";





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



