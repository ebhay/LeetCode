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
                t2='('+t2+ch+t1+')';
                s.push(t2);
            }
            else{
                s.push(string(1,ch));
            }
        }
        return s.top();
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);

    return 0;
}

// } Driver Code Ends