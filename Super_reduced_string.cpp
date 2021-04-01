// LINK= https://www.hackerrank.com/challenges/reduced-string/problem


#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    string str="";
    str.push_back(s.at(0));
    for(int i=1;i<s.size();i++)
    {
       char ch=s.at(i);
       if(str.back()==ch)
       str.pop_back();
       else {
          str.push_back(ch);
       }   
    }
    if(str.size()==0)
    return "Empty String";
    else {
    return str;
    }


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
