// LINK=https://www.interviewbit.com/problems/profit-maximisation/


int Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq(A.begin(),A.end());
    int sum=0,k=0;
    while(B--)
    {
        int k=pq.top();
        pq.pop();
        sum+=k;
        k--;
        pq.push(k);
    }
    return sum;
    
}
