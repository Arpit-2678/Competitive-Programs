// LINK=https://practice.geeksforgeeks.org/problems/remove-repeated-digits-in-a-given-number4014/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#



#include<bits/stdc++.h>
using namespace std;

long long int modify (long long int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        cout << modify (n) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal
// } Driver Code Ends



long long int modify (long long int N)
{
    string str=to_string(N);
    auto ip=unique(str.begin(),str.end());
    str.resize(distance(str.begin(),ip));
    long long int x=stol(str);
    return x;
}
