/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        // code here
        unordered_map<int, int> mp; 
        int s=0, mlex=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
            if (s == 0) {
                mlex = i + 1;  // from 0 to i
            }

            
            if (mp.find(s) != mp.end()) {   // Check if sum exists
                int len=i-mp[s];
                mlex=max(mlex,len);
            }
            else{
                mp.insert({s,i});
            }
        }
        return mlex;
    }
};