//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& arr) {
       int jump=0;
    int end=0,currmax=0;
    for(int i=0;i<arr.size()-1;i++){
        currmax=max(currmax,i+arr[i]);
        if(i==end){
            jump++;
            end=currmax;
        }
        if(end<i)
        return -1;//fas gaya
    }    
    if(end<arr.size()-1)
    return -1;
    return jump;

    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends