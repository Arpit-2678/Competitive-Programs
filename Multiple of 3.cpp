// LINK=https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/multiple-85dda659/


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll temp=n;
		ll sum=0;
		while(temp!=0)
		{
			sum+=temp%10;
			temp/=10;
		}
		if(sum%3==0)
		cout<<n<<"\n";
		else
		{
			char ch='0'+(3-(sum%3));

			string str,check;
			check.push_back(ch);
			str=to_string(n);
			ll res=9999999999,copy;
			for(int i=0;i<=str.length();i++)
			{
				string temp=str;
				temp.insert(i,check);
				copy=stoll(temp);
				res=min(res,copy);

			}
			cout<<res<<"\n";
			
		}

	}
	return 0;
	
}
