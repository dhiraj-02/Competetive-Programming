https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0) {
            return false;
        }
        std::stack<char> chars;
        for(auto & p : s) {
            
            switch (p) {
               case '{':
               case '(':
               case '[':
                chars.push(p);
               break;
               case '}':
               if(chars.empty() || chars.top() != '{') {
                   return false;
               }
               chars.pop();
               break;
               case ')':
               if(chars.empty() || chars.top() != '(') {
                   return false;
               }
               chars.pop();
               break;
               case ']':
               if(chars.empty() || chars.top() != '[') {
                   return false;
               }
               chars.pop();
               break;
                
               break;
           }
        }
       
       return chars.size()==0;
    }
};