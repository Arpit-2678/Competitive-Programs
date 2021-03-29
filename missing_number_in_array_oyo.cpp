/*  LINK= https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#  */


int MissingNumber(vector<int>& v, int n) {
    int sum=accumulate(v.begin(),v.end(),0);
    int rs=(n*(n+1))/2;
    return rs-sum;
}


// full question can be found at above stated link.
