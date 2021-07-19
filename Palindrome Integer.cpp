//  LINK=https://www.interviewbit.com/problems/palindrome-integer/


int Solution::isPalindrome(int A) {
    if(A>INT_MAX or A<INT_MIN or A<0)
    return false;
    int temp=A;
    int rev=0;
    while(temp!=0)
    {
        int rem=temp%10;
        rev=(rev*10)+rem;
        temp/=10;

    }
    return (rev==A)?true:false;
}
