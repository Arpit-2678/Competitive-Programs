// LINK=https://www.interviewbit.com/problems/generate-all-parentheses/


int Solution::isValid(string A) {
      stack<char>st;
      for(int i=0;i<A.length();i++)
      {
          char ch=A.at(i);
          if(ch=='(' or ch=='{' or ch=='[')
          st.push(ch);
          else
          {
              if(ch==')')
              {
                  if(!st.empty() and st.top()=='(')
                    st.pop();
                    else
                    return 0;   
              }
              else if(ch=='}')
              {
                    if(!st.empty() and st.top()=='{')
                    st.pop();
                    else
                    return 0;
              }
              else
              {
                    if(!st.empty() and st.top()=='[')
                    st.pop();
                    else
                    return 0;
              }
          }
      }
      if(st.empty())
      return 1;
      else
      return 0;
}
