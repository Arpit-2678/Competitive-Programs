//  LINK=https://www.interviewbit.com/test/35998efd37/?signature=BAhpA8FoEQ%3D%3D--0b06b78ce3e71173c546791b5491d4c1d9c96b6b#/view-code-error-trivial_case_correctness



const int inf = 1e9+7;
int Solution::solve(vector<int> &A, int B) {
    int fcnt=0;
    unordered_map<int,int>ump;
    unordered_set<int>ust;
    int i=0,j=0;
    if(B>A.size())
    {
        B=A.size();
    }
    while(j<A.size())
    {
        ump[A[j]]++;
        if((ump[A[j]]>=2))
        {
            ust.insert(A[j]);
        }
        if(j-i+1==(B+1))
        {
           if(ust.find(A[i])!=ust.end())
            {
                fcnt+=ump[A[i]]-1;
            }
            ump[A[i]]--;
            if(ump[A[i]]<1)
            {
                if(ust.find(A[i])!=ust.end())
                ust.erase(A[i]);
            }
            i++;
            j++;
        }
        else if(j-i+1<(B+1))
        j++;
        
    }
    for(auto it:ust)
    {
     fcnt+=(ump[it]*(ump[it]-1))/2;
    }
    
    
     return fcnt%inf;
    
}
