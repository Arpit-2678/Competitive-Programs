// LINK=https://www.interviewbit.com/problems/distinct-numbers-in-window/


vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int>v;
    if(B>A.size())
    return v;
    unordered_map<int,int>ump;
    int i=0,j=0;
    while(j<A.size())
    {
        ump[A[j]]++;
        if(j-i+1==B)
        {
            v.push_back(ump.size());
            if(ump[A[i]]==1)
                   ump.erase(A[i]);
            else
               ump[A[i]]--;
            
            i++;
            j++;
        }
        else if(j-i+1<B)
        j++;
    }
    return v;
}
