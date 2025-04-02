class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> s;
        for(int i=0;i<tokens.size();i++){
            string ch=tokens[i];
            if(ch=="*"||ch=="/"||ch=="+"||ch=="-"){
                //last two stack elements kai sath bakchodi karo
                int b= s.top();
                s.pop();
                int a=s.top();
                s.pop();
                if(ch=="*")
                    s.push(b*a) ;
                    
                else if(ch=="/")
                    s.push(a/b) ;
                    
                else if(ch=="+")
                    s.push(b+a) ;
                    
                else
                    s.push(a-b) ;   
            }
            else{
                int z=stoi(ch);
                s.push(z);
            }

        }
        return s.top();
    }
};