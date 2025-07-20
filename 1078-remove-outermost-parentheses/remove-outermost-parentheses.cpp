class Solution {
public:
    string removeOuterParentheses(string res) {
        int depth = 0;
        string s;
        for (int i = 0; i < res.length(); i++) {
            if (res[i] == '(') {
                depth++;
                if (depth > 1)
                    s += '(';
                
            } else {
                depth--;
                if (depth > 0)
                    s += ')';
            }
        }
        return s;
    
    }
};