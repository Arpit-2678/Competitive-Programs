// LINK=https://www.hackerrank.com/challenges/repeated-string/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
      long cnt=0;
      for(int i=0;i<s.size();i++)
      {
          if(s.at(i)=='a')
            cnt++;
      }
      long res=(n/s.size());
      if(n%s.size()==0)
      {
          return (res*cnt);
      }
      else {
           long lim=(n%s.size());
           int cnt1=0;
           for(long i=0;i<lim;i++)
           {
               if(s.at(i)=='a')
                 cnt1++;
           }
           return ((res*cnt)+cnt1);
      }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
