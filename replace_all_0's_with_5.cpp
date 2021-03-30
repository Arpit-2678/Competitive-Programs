/*  LINK= https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&category[]=Mathematical&category[]=Arrays&category[]=Strings&category[]=Hash&category[]=logical-thinking&query=problemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscategory[]Mathematicalcategory[]Arrayscategory[]Stringscategory[]Hashcategory[]logical-thinking#  */

int convertFive(int n) {
    int temp=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==0)
        {
            rem=5;
        }
        temp=(temp*10)+rem;
        n=n/10;
    }
    int new_num=0;
    while(temp!=0)
    {
        int rem=temp%10;
        new_num=(new_num*10)+rem;
        temp=temp/10;
    }
    return new_num;
   
}


//   full question can be find at above mentioned link
