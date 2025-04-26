//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
         queue<int> pos, neg;
         for(int i=0;i<arr.size();i++){
             if(arr[i]>=0)
             pos.push(arr[i]);
             else
             neg.push(arr[i]);
         }
         int i=0;
         while(!pos.empty()){
             arr[i]=pos.front();
             pos.pop();
             i++;
         }
         while(!neg.empty()){
             arr[i]=neg.front();
             neg.pop();
             i++;
         }
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends