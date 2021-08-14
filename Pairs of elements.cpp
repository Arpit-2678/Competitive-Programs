// LINK=https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/t-rex-and-the-pairs-0a045ce2/


#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main() {
  cin.tie(0);
  long long int n;
  cin >> n;
  long long int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  unordered_map<long long int, long long int> mp1;
  for (int i = 0; i < n; i++) {
    mp1[(a[i] + (long long)((long long int)(i + 1) * (i + 1)))]++;
  }
  unordered_map<long long int, long long int> mp2;
  for (int i = 0; i < n; i++) {
    mp2[(a[i] - (long long)((long long int)(i + 1) * (i + 1)))]++;
  }

  long long int cnt = 0;
  for (auto it : mp1) {
    cnt += (mp2[it.first]*it.second);
  }
  cout << cnt << endl;
}
