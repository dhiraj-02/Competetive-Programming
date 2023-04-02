//https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> val;
        if(t.size()==1)
        return stoi(t[0]);
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!="*" && t[i]!="+" && t[i]!="/" && t[i]!="-")
            {
                val.push(stoi(t[i]));
                continue;
            }

            int b=val.top();
            val.pop();

            int a= val.top();
            val.pop();
            
            if(t[i]=="+")
            {
                val.push(a+b);
            }
            else if(t[i]=="-")
            {
                val.push(a-b);
            }
            else if(t[i]=="/")
            {
                val.push(a/b);
            }
            else if(t[i]=="*")
            {
                val.push(a*b);
            }
            
        }
        return val.top();
    }
};