//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int ans = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;
        if (ans<0)
        ans=-ans;
        int mi,ma;
        for(int i=0;i<arr.size()-1;i++){
            mi=min(smallest,arr[i+1]-k); // Next Element 5 hai usko 3 reduce kiye to woh min
            ma=max(largest,arr[i]+k);//k ka value bhot bara hua toh min ko max bana sakta
            if(mi<0)
            continue;//ignore tower ka size negative tohri lagai
            ans=min(ans,ma-mi);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
        cout << '~' << endl;
    }
    return 0;
}
// } Driver Code Ends