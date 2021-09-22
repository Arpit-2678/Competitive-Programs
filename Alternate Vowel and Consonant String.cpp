//  LINK=https://practice.geeksforgeeks.org/problems/alternate-vowel-and-consonant-string2939/1#


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    
    
     string vow_to_conso(int *arr_vow,int *arr_conso,int n)
     {
          string res="";
               for(int i=0;i<n;i++)
               {
                   if(!(i&1))
                   {
                       int j=0;
                       for(;j<26;j++)
                       {
                           if(arr_vow[j]>0)
                           {
                               arr_vow[j]--;
                               break;
                           }
                       }
                       char ch=(char)(j+'a');
                       res.push_back(ch);
                   }
                   else
                   {
                       int j=0;
                       for(;j<26;j++)
                       {
                           if(arr_conso[j]>0)
                           {
                               arr_conso[j]--;
                               break;
                           }
                       }
                       char ch=(char)(j+'a');
                       res.push_back(ch);
                   }
               }
               return res;
     }
     
     
     string conso_to_vow(int *arr_vow,int *arr_conso,int n)
     {
          string res="";
               for(int i=0;i<n;i++)
               {
                   if(!(i&1))
                   {
                       int j=0;
                       for(;j<26;j++)
                       {
                           if(arr_conso[j]>0)
                           {
                               arr_conso[j]--;
                               break;
                           }
                       }
                       char ch=(char)(j+'a');
                       res.push_back(ch);
                   }
                   else
                   {
                       int j=0;
                       for(;j<26;j++)
                       {
                           if(arr_vow[j]>0)
                           {
                               arr_vow[j]--;
                               break;
                           }
                       }
                       char ch=(char)(j+'a');
                       res.push_back(ch);
                   }
               }
               return res;
     }
     
     
    string rearrange (string str, int n)
    {
      int vow=0,conso=0,flag1=0,flag2=0;
       int arr_vow[26]{0},arr_conso[26]{0};
       int arr[26]{0};
       int first_vow=-1,first_conso=-1;
       for(int i=0;i<n;i++)
       {
           char ch=str.at(i);
           if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')
           {
               arr_vow[ch-'a']++;
              vow++;
              
           }
           else
           {
               arr_conso[ch-'a']++;
            conso++;
           }
           
           
           arr[ch-'a']++;
           
       }
       
       int pos=-1;
       for(int i=0;i<26;i++)
       {
           if(arr[i]>0)
           {
               pos=i;
               break;
           }
       }
       
       char var=(char)(pos+'a');
        if(var=='a' or var=='e' or var=='i' or var=='o' or var=='u')
        {
            first_conso++;
        }
        else
        first_vow++;
       
       if(abs(vow-conso)>1)
       return "-1";
       else
       {
           if(vow==conso)
           {
              
              if(first_vow<first_conso)
              return vow_to_conso(arr_vow,arr_conso,n);
              else
              return conso_to_vow(arr_vow,arr_conso,n);
           }
           else if(vow>conso)
           {
                return vow_to_conso(arr_vow,arr_conso,n);
           }
           else
             return conso_to_vow(arr_vow,arr_conso,n);
       }
    }
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
