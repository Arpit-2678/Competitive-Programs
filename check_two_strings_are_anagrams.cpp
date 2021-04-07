// LINK=https://practice.geeksforgeeks.org/problems/check-if-two-strings-are-k-anagrams-or-not/1/?category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=category[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage2sortBysubmissionscategory[]Arrayscategory[]Stringscategory[]Hash#


#include<iostream>
using namespace std;
const int MAX_CHAR = 26;
bool areKAnagrams(string str1, string str2, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		if (areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}// } Driver Code Ends


/*Complete the function below*/
#include<bits/stdc++.h>
bool areKAnagrams(string str1, string str2, int k)
  {
      if(str1.length()!=str2.size())
       return false;
      unordered_map<char,int>umap;
       for(int i=0;i<str2.size();i++)
       {
           umap[str2.at(i)]++;
       }
       for(auto it:str1)
       {
           if(umap.find(it)==umap.end())
           {
               k--;
           }
           else
           {
               umap[it]--;
               if(umap[it]==0)
               umap.erase(it);
           }
           
       }
       if(k<0)
           return false;
       return true;
       
   }
