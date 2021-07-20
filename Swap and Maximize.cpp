//  LINK=https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1/?problemType=functional&difficulty[]=-1&page=2&sortBy=submissions&category[]=Sorting&query=problemTypefunctionaldifficulty[]-1page2sortBysubmissionscategory[]Sorting#


long long int maxSum(int arr[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		cout<<maxSum(arr,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int  i=0, j=n-1;
    long long sum=0;
    int k=0;
    while(i<j)
    {
        sum+=abs(arr[i]-arr[j]);
        if(!(k&1))
        i++;
        else
        j--;
        k++;
    }
    sum+=abs(arr[j]-arr[0]);
    return sum;
}
