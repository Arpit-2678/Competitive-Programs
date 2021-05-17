// LINK=https://practice.geeksforgeeks.org/problems/valid-expression1025/1/?problemStatus=unsolved&problemType=functional&difficulty[]=0&difficulty[]=1&page=1&sortBy=newest&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=STL&category[]=number-theory&category[]=Modular%20Arithmetic&category[]=sliding-window&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]0difficulty[]1page1sortBynewestcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]STLcategory[]number-theorycategory[]Modular%20Arithmeticcategory[]sliding-window#


#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends

bool balancedParenthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (c == '(' || c == '{' || c == '[')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            if (s.empty() || s.top() != '(')
            {
                return false;
            }
            s.pop();
        }
        else if (c == '}')
        {
            if (s.empty() || s.top() != '{')
            {
                return false;
            }
            s.pop();
        }
        else if (c == ']')
        {
            if (s.empty() || s.top() != '[')
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}
bool valid(string str)
{
    // code here
    bool ans = balancedParenthesis(str);
    if(ans)
    return true;
    else
    return false;
}
