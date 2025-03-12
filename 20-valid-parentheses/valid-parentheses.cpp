class Solution {
public:
    
    bool isValid(string s) {
        stack <char> str;
        for(int i=0; i<s.length();i++){
            char ch = s[i];

            if(ch=='[' || ch=='{' || ch=='(')
                str.push(ch);
            else if(!str.empty() && (ch==']' && str.top()=='[' || ch=='}' && str.top()=='{' || ch==')' && str.top()=='('))
            {
                str.pop();
            }
            else 
            return false;

        }
        return str.empty();    
    }
};