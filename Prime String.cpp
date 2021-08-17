// LINK=https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/primestring/


#include<bits/stdc++.h>
#define ll long long int
#define test while(t--)
#define pb push_back
#define ain(arr) for (auto &it : arr) cin >> it;
using namespace std;
const int inf = 1e9+7;

 bool prime[1000000];
void SieveOfEratosthenes()
{

     int  n=1000000;    
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	memset(prime, true, sizeof(prime));
	SieveOfEratosthenes();
	prime[1]=false;
	int t;
	cin>>t;
	test{
		string str;
		cin>>str;
		unordered_map<char,int>ump;
		for(auto it:str)
		{
			ump[it]++;
		}
		if(prime[ump.size()])
		{
			int flag=true;
			for(auto it:ump)
			{
               if(prime[it.second]==false)
			  { flag=false;
			   break;
			  }
			}
			if(flag)
			cout<<"YES\n";
			else
			cout<<"NO\n";
		}
		else
		cout<<"NO\n";
	}



	return 0;

}
