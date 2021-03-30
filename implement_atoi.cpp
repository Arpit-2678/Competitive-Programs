/* LINK=https://practice.geeksforgeeks.org/problems/implement-atoi/1/?category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinkingproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinking#  */


class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
            int flag=0;
         if(str.at(0)=='-')
         {
            flag++; 
            str.erase(0,1);
         }
         int p=(str.length()-1);
         int res=0;
        for(int i=0;i<str.size();i++)
        {
            if(str.at(i)>='0' and str.at(i)<='9')
            {
            int x=str.at(i)-'0';
            res=(x*(pow(10,p--)))+res;
            
            }
            else
            return -1;
            
        }
        if(flag)
        return (-1*res);
        else
        return res;
       
    }
};
  // For full question refer above mentioned link
