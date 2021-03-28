/*  LINK=  https://www.codechef.com/SPCF2021/problems/SPCF21A */

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{   
    ll n;
    cin>>n;
    unordered_map<ll,set<ll>>umap;
    ll num;
    for(ll i=0;i<n;i++)
    {
        cin>>num;
        umap[num].insert(i);
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        if((umap.find(x)==umap.end()) or (umap.find(y)==umap.end()))
        cout<<"-1"<<"\n";
        else
        {
        ll xd=*(umap[x]).rbegin();
        ll yd=*(umap[y]).begin();
         ll xxd=*(umap[x]).begin();
        ll yyd=*(umap[y]).rbegin();
        cout<<max((xd-yd),(yyd-xxd))<<"\n";
        }
    }
    
   
 }
