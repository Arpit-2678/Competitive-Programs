// LINK=https://www.hackerrank.com/challenges/anagram/problem




#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    if(s.size()&1)
    return -1;
    else {
    unordered_set<char>st;
    for(auto it:s)
    {
        st.insert(it);
    }
    string left=s.substr(0,s.size()/2);
    string right=s.substr(s.size()/2);
    if(st.size()==s.size())
    return s.size()/2;
    else if(left==right)
    {
        return 0;
    }
    else {
        unordered_map<char,int>umap;
        for(auto it:left)
        umap[it]++;
        int res=0;
        for(auto it:right)
        {
            if(umap.find(it)==umap.end())
             res++;
            else {
               umap[it]--;
               if(umap[it]==0)
                umap.erase(it);
            }
        }
        return res;    
    }
      
    
    
    
    }
    


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

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
