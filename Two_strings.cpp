// LINK=https://www.hackerrank.com/challenges/two-strings/problem



#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
int cnt=0;
string twoStrings(string a, string b) {
    unordered_set<char>ust;
    for(auto it:b)
    {
        ust.insert(it);
    }
    for(auto it:a)
    {
        if(ust.find(it)!=ust.end())
        {
            return "YES";
        }
    }
    return "NO";


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
