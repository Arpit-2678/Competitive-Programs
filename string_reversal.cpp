// LINK=https://practice.geeksforgeeks.org/problems/string-reversalunpublished-for-now5324/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&sortBy=newest&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]HashproblemStatusunsolvedproblemTypefunctionalpage1sortBynewestcategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hash#



string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}
// } Driver Code Ends


string reverseString(string s)
{
    int arr[26]{0};
    for(int i=0;i<s.size();i++)
    {
         if(s.at(i)==' ')
           s[i]='#';
       
    }
    for(int i=s.size()-1;i>=0;i--)
    {
         arr[s.at(i)-'A']++;
        if(arr[s.at(i)-'A']>1)
          s[i]='#';
    }
    
    reverse(s.begin(),s.end());
    int k,j;
    for ( k = j = 0; k <s.size(); k++)
        if (s[k] !='#')
            s[j++] = s[k];
            
       
    return s.substr(0,j);
    
}
