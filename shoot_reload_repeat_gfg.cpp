// LINK=https://practice.geeksforgeeks.org/problems/shoot-reload-repeat2415/1






bool isValid (string s, int n);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n ; cin >> n;

        cout << isValid (s, n) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


bool isValid (string s, int n)
{
     int cnt=0;
     int flag=0;
     if(s.size()<n)
     {
         return true;
     }
     //int temp=n;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)=='S')
        {
            cnt++;
           
        }
        
        if(s.at(i)=='R')
        {
            flag++;
            if(cnt>n)
            return false;
            else
            cnt=0;
        }
    }
    if(!flag or cnt>n)
    return false;
    else
    return true;
}
