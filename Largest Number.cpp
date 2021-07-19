// LINK=https://www.interviewbit.com/problems/largest-number/


bool mycmp(string a,string b){
    string ab=a.append(b);
    string ba=b.append(a);
    return ab.compare(ba)>0;
}
string Solution::largestNumber(const vector<int> &A) {
           vector<int>B(A);
           sort(B.begin(),B.end());
           if(B.back()==0)
             return "0";
       vector<string>str;
    for(int i=0;i<A.size();i++)
    {
          str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(),mycmp);
    string s1="";
    for(auto it:str)
    {
        s1+=it;
    }
    return s1;
}
