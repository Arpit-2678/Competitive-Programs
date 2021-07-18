//  LINK=https://www.interviewbit.com/problems/balanced-parantheses/


int Solution::solve(string A) {

      stack<char>st;
      for(int i=0;i<A.length();i++)
      {
          char ch=A.at(i);
          if(ch=='(')
          st.push(ch);
          else
          {
              if(!st.empty() and st.top()=='(')
                    st.pop();
                    else
                    return 0;   
          }
      }
      if(st.empty())
      return 1;
      else 
      return 0;
}
