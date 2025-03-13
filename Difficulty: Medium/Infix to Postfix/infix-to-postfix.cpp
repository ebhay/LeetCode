//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int precedence(char ch){
        if(ch=='^') return 3;
        if(ch=='*'|| ch=='/') return 2;
        if(ch=='+'|| ch=='-') return 1;
        return 0;
    }
    string infixToPostfix(string& s) {
        stack <char> str;
        string postfix="";
        char ch;
        for(int i=0;i<s.length();i++){
            ch=s[i];
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^'){

                while (!str.empty() && precedence(str.top()) >= precedence(ch)) {
                    postfix += str.top();
                    str.pop();
                }
                str.push(ch);
            }
            
            else if(ch=='(')
                str.push(ch);
            else if(ch==')'){
                while(str.top()!='(' && !str.empty()){
                    postfix+=str.top();
                    str.pop();
                }
                str.pop();
            }
            else{
                postfix+=ch;
            }
        }
        while(!str.empty()){
            postfix+=str.top();
            str.pop();
            
        }
        return postfix;
    }
};



//{ Driver Code Starts.
//  Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends