//  LINK=https://www.interviewbit.com/test/35998efd37/?signature=BAhpA8FoEQ%3D%3D--0b06b78ce3e71173c546791b5491d4c1d9c96b6b#/problem_2


int Solution::solve(vector<int> &A) {
    unordered_map<int,int>ump;
    for(auto it:A)
    ump[it]++;
    int maxi=INT_MIN;
    for(auto it:ump)
    {
       if(maxi<it.second)
       {
           maxi=it.second;
       }
        
    }
    return maxi;
}
