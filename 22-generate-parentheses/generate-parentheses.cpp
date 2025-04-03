class Solution {
public:
    vector <string> result;
    bool isValid(string& s){
        int c=0;
        for (int i=0;i<s.length();i++){
            if(s[i]=='(')
            c++;
            else 
            c--;
            if(c<0)
            return false;
        }
        return c==0;
    }
    void solve(string curr,int n){
        if(curr.length()==2*n){
            if(isValid(curr)){
                result.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        solve (s,n);
        return result;   
    }
};