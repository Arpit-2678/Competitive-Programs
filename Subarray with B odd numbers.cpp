// LINK=https://www.interviewbit.com/problems/subarray-with-b-odd-numbers/



int Solution::solve(vector<int> &A, int B) {
   unordered_map<int,int>umap;
   int pre=0,cnt=0;
   for(int i=0;i<A.size();i++)
   {
       if(A[i]&1)
       {
           A[i]=1;
       }
       else
       {
           A[i]=0;
       }

   }

   for(int i=0;i<A.size();i++)
   {
       pre+=A[i];
       if(pre==B)
         cnt++;
        if(umap.find(pre-B)!=umap.end())
         {
             cnt+=umap[pre-B];
         }
         
             umap[pre]++;
         
   }
   return cnt;

    
}
