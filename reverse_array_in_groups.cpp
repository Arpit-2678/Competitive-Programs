/*  LINK= https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinkingproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinking#  */


class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& v, int n, int k){
       if(n==k)
       reverse(v.begin(),v.end());
       else
       {
           int j=0;
       
       for(int i=0;i<n;i+=k)
       {
           if(i+k>n)
           {
               j=n;
           }
           else
           {
               j=i+k;
           }
           reverse(v.begin()+i,v.begin()+j);
       }
       }
    }
};


// Full question can be found at above mentioned link
