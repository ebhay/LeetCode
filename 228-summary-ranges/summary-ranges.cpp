class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> res;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            while (i + 1 < nums.size() && (long long)nums[i + 1] - (long long)nums[i] == 1){

                i++;
            }
            if(a!=nums[i])
             res.push_back(to_string(a) + "->" + to_string(nums[i]));
            else
             res.push_back(to_string(a));
        }
        return res;
    }
};