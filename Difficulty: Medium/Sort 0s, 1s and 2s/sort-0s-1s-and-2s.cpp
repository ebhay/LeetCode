//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int l=0,m=0,h=arr.size()-1;
        while(m<=h){
            if(arr[m]==0){
                arr[m]=arr[l];
                arr[l]=0;
                m++,l++;
            }
            else if(arr[m]==1){
                m++;
            }
            else{
                arr[m]=arr[h];
                arr[h]=2;
                h--;
            }
        }
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends