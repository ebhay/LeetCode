//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        int low=0,high=arr.size()-1,mid;
        int val=-1;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(arr[mid]==x)
            {
                val=mid;
                while(mid<=high && arr[mid]==arr[mid+1])
                    mid+=1;
                return mid;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
                val=mid;
            }
            else{
                high=mid-1;
                
            }
        }
        return val;
        
    }
};



//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, x);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends