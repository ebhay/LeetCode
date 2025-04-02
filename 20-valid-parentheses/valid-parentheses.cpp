#include <stack>
class Solution {
public:
    bool isValid(string s) {
        stack <char> p;
        int i, len=s.length();
        for(i=0;i<len;i++){
            char ch=s[i];
            if(ch=='{'||ch=='('||ch=='[')
            p.push(ch);
            else{ 
                if(p.empty())
                    return false;
                if(ch=='}' && p.top()=='{' || ch==']' && p.top()=='['  || ch==')' && p.top()=='(')
                    p.pop();
                else
                    return false;            
            }
        }
        return p.empty();
    }
};