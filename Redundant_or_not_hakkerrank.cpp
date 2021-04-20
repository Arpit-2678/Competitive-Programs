// LINK=https://www.hackerrank.com/contests/code-cpp-may-2015/challenges/redundant-or-not/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int x;
    unordered_set<int>st;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        if(st.find(x)!=st.end())
        {
            cout<<"REDUNDANT"<<"\n";
        }
        else
        {
            st.insert(x);
            cout<<"ADDED"<<"\n";
        }
    }
    return 0;
}
