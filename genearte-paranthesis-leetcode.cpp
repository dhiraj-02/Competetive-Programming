//https://leetcode.com/problems/generate-parentheses/

class Solution {
public:

    vector<string> res;
    int m;

    void gen(int open , int close, string s)
    {
        if(open == m && close==m )
        {
            res.push_back(s);
            return; 
        }
        if (open < m) {
            //ans=ans+"(";
            gen(open + 1, close, s+"(") ;
        }
        if (open > close) {
             gen(open , close+1, s+")") ;
        }
    }

    
    vector<string> generateParenthesis(int n) {
        m=n;
        gen(0,0,"");
        return res;
        
    }
};