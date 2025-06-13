

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int curmax=INT_MIN;
        vector <int> leader;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=curmax){
                leader.push_back(arr[i]);
                curmax=arr[i];
            }
        }
        reverse(leader.begin(), leader.end()); // Restore left-to-right order
        return leader;
    }
};