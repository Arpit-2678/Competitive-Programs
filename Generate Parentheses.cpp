//  LINK=https://leetcode.com/problems/generate-parentheses/


class Solution {
public:
    void generate_bracket(char out[], int n, int ind, int open, int close,vector<string>&res)
{
	if (ind == 2 * n)
	{
		out[ind] = '\0';
		res.push_back(out);
		return;
	}
	if (open < n)
	{
		out[ind] = '(';
		generate_bracket(out, n, ind + 1, open + 1, close,res);
	}
	if (close < open)
	{
		out[ind] = ')';
		generate_bracket(out, n, ind + 1, open, close + 1,res);
	}
	return;
}

    vector<string> generateParenthesis(int n) {
        vector<string>res;
        char op[10000];
        generate_bracket(op,n,0,0,0,res);
        return res;
        
    }
};
