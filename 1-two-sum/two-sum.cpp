class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int>mp;
        for(int i=0;i<nums.size();i++){
            int remain=target-nums[i];
            if(mp.count(remain)){
                return {i,mp[remain]};
            }
            mp.insert({nums[i],i});
        }
        return {};
    }
};