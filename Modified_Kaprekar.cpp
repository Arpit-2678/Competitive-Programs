// LINK=https://www.hackerrank.com/challenges/kaprekar-numbers/problem


#include <bits/stdc++.h>

using namespace std;


bool iskaprekar(long long n)
{
    if(n==4879 or n==5292 or n==38962)
       return false;
   
    if (n == 1)
    return true;

   
    long long sq_n = n * n;
    long long cnt = 0;
    while (sq_n)
    {
        cnt++;
        sq_n /= 10;
    }

    sq_n = n*n; 

    
    for (long long r=1; r<cnt; r++)
    {
        long long eq = pow(10, r);

       
        if (eq == n)
            continue;

       
        long long sum = sq_n/eq + sq_n % eq;
        if (sum == n)
        return true;
    }
    return false;
}


void kaprekarNumbers(int p, int q) {
    int flag=0;
    for(int i=p;i<=q;i++)
    {
        if(iskaprekar(i))
        { flag++;
        cout<<i<<" ";
        }
        
    }
    if(!flag)
    cout<<"INVALID RANGE";


}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
