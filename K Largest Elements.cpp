// LINK=https://www.interviewbit.com/problems/k-largest-elements/

vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int>pq(A.begin(),A.end());
    vector<int>res;
    while(B--)
    { 
        res.push_back(pq.top());
        pq.pop();

    }
    return res;
}
