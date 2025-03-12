class Solution {
public:
    
    bool isValid(string s) {
        stack <char> str;
        for(int i=0; i<s.length();i++){
            char ch = s[i];

            
           if(!str.empty() && (ch==']' && str.top()=='[' || ch=='}' && str.top()=='{' || ch==')' && str.top()=='('))
            {
                str.pop();
            }
            else
                str.push(ch);
        }
        return str.empty();    
    }
};