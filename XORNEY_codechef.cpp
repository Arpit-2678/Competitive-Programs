// LINK=https://www.codechef.com/problems/XORNEY


#include<iostream>
using namespace std;
#define ll long long
 long long findXOR(ll n)
{
    int mod = n % 4;
 
    
    if (mod == 0)
        return n;
 
 
    else if (mod == 1)
        return 1;
 
    
    else if (mod == 2)
        return n + 1;
 
    
    else if (mod == 3)
        return 0;
}
int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
   
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        long long ans=findXOR(l-1)^findXOR(r);
        if(ans&1)
        {
            cout<<"Odd\n";
        }
        else
        cout<<"Even\n";
        
    }
   
 }
