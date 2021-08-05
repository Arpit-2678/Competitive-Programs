//  LINK=https://www.interviewbit.com/problems/palindrome-string/



int Solution::isPalindrome(string A) {
     transform(A.begin(), A.end(), A.begin(), ::tolower);
     string b="";
     
     for(int i=0;i<A.size();i++)
     {
         if((A[i]>='a' and  A[i]<='z') or (A[i]>='0' and A[i]<='9'))
            b.push_back(A[i]);
     }

        string c=b;

     reverse(c.begin(),c.end());
     return (c==b)?1:0;

}
