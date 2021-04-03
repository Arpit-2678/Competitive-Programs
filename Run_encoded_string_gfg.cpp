// LINK=https://practice.geeksforgeeks.org/problems/run-length-encoding/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Mathematical&category[]=Arrays&category[]=Strings&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]StringsproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Strings#


#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

char *encode(char *src)
{     
 // char *str1=new char[100];
  int cnt=1;
  char ch=src[0];
  string str="";
  int k=0;
  for(int i=1;src[i]!='\0';i++)
  {
      if(src[i]!=ch)
      {
         str.push_back(ch);
         str+=to_string(cnt);
         ch=src[i];
         cnt=1;
      }
      else
       cnt++;
  }
  str+=ch;
  str+=to_string(cnt);
  char *str1=new char[str.size()+1];
  int i=0;
  for(;i<str.size();i++)
  {
      str1[i]=str[i];
  }
  str1[i]='\0';
  
  return str1;
  
  
}     
 
