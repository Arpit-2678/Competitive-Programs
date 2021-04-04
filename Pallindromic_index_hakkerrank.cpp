// LINK=https://www.hackerrank.com/challenges/palindrome-index/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    string rev=s;
    reverse(rev.begin(),rev.end());
    if(rev==s)
    {
        return -1;
    }
    
    int l=0;
    int r=s.size()-1;
    while(l<r)
    {
        if(s.at(l)!=s.at(r))
        {
            string temp=s;
            string temp1=s;
            
            
            temp.erase(l,1);
            string temp2=temp;
            reverse(temp.begin(),temp.end());
            if(temp==temp2)
              return l;
            else 
            {
                temp1.erase(r,1);
                string temp3=temp1;
                 reverse(temp3.begin(),temp3.end());
            if(temp3==temp1)
              return r;
              else {
               return r;
              }
                
            }
                 
        }
          
         l++;
         r--; 
    }
    return 0;
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
