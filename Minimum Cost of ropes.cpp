// LINK=https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#




 // } Driver Code Ends

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>>pq(arr,arr+n);
       long long  int cost=0;
        long long int newLength=0;
        while(pq.size()>1)
        {
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            newLength=a+b;
            cost+=newLength;
            pq.push(newLength);
        }
        return cost;
    }
};


// { Driver Code Starts.
long long minCost(long long arr[], long long n);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
