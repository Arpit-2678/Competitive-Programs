// LINK=https://www.interviewbit.com/problems/first-non-repeating-character-in-a-stream-of-characters/


string Solution::solve(string A) {
    queue<char>q;
    int freq[27]{0};
    string res="";
    int i=0;
    char ch=A.at(i);
    for(int i=0;i<A.length();i++)
    {
         char ch=A.at(i);
        q.push(ch);
        freq[ch-'a']++;
        while(!q.empty())
        {
            int ind=q.front()-'a';
            if(freq[ind]>1)
            q.pop();
            else
            { 
                res.push_back(q.front());
                break;

            }
        }
        if(q.empty())
        res.push_back('#');
    }
    return res;
}
