// LINK=https://www.hackerrank.com/challenges/making-anagrams/problem



#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
    unordered_map<char,int>umap;
    int res=0;
    for(auto it:s2)
    {
        umap[it]++;
    }
    for(auto it:s1)
    {
        if(umap.find(it)==umap.end())
          res++;
        else {
           umap[it]--;
           if(umap[it]==0)
           umap.erase(it);
        }
    }
    int sum=0;
    for(auto it:umap)
    {
        sum+=it.second;
    }
    return (sum+res);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
