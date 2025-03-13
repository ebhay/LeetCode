//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  string postToInfix(string exp) {
        // Write your code here
        stack<string> s;
        string t1;
        string t2;
        char ch;
        for(int i=0;i<exp.length();i++){
            ch=exp[i];
            if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
                t1=s.top();
                s.pop();
                t2=s.top();
                s.pop();
                t2=')'+t2+ch+t1+'(';
                s.push(t2);
            }
            else{
                s.push(string(1,ch));
            }
        }
        return s.top();
    }
    string reverse(string st){
        string temp = "";
        for (int i = st.length() - 1; i >= 0; i--) {
        temp += st[i];  // Appending characters in reverse order
        }
        return temp;
    }
    string preToInfix(string pre_exp) {
        // Write your code here
        string str = reverse(pre_exp);
        //mera postfix ban gaya
        //post to infix
        str=postToInfix(str);
        str= reverse(str); 
        return str;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends