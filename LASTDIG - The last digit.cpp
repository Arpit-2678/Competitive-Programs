// LINK=https://www.spoj.com/problems/LASTDIG/


#include <iostream>
using namespace std;
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = ((res%10) * (a%10))%10;
        a = ((a%10) * (a%10))%10;
        b >>= 1;
    }
    return (res%10);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    long long  a,b;
        cin>>a>>b;
        cout<< (binpow(a,b))%10<<"\n";
	}
	return 0;
}
