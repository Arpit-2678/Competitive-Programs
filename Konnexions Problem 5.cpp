//  LINK=https://www.hackerearth.com/problem/algorithm/exam-time-12/

#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ain(arr) for (auto &it : arr) cin >> it;
using namespace std;
const int inf = 1e9+7;
 const int len=1e6+5;
 int phi(int n)
{
    int result = n;
  
    for(int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
                 
            result -= result / p;
        }
    }
  
    if (n > 1)
        result -= result / n;
         
    return result;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int totient[len]{0};
	for(int i=1;i<len;i++)
	totient[i]=phi(i);
	int t;
	cin>>t;
	test{
		ll num;
		cin>>num;
		cout<<totient[num]<<"\n";
	}


	return 0;

}
