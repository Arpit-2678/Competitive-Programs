// LINK=https://practice.geeksforgeeks.org/problems/palindromic-subsequences1335/1/?category[]=Strings&category[]=Hash&category[]=Strings&category[]=Hash&problemType=functional&page=1&sortBy=newest&query=category[]Stringscategory[]HashproblemTypefunctionalpage1sortBynewestcategory[]Stringscategory[]Hash#



int MinRemove(int n, string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << MinRemove(n, s) << endl;
    }
return 0;
}// } Driver Code Ends


int MinRemove(int n, string s){
      int j=n-1;
      for(int i=0;i<n/2;i++,j--)
      {
          if(s.at(i)!=s.at(j))
          return 2;
      }
      return 1;
      
}
