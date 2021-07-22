// LINK=https://www.interviewbit.com/problems/trailing-zeroes/



int Solution::solve(int A) {
    int bit=1;
    int cnt=0;
    while((bit&A)==0)
    {
        cnt++;
        bit=bit<<1;
    }
    return cnt;
}
