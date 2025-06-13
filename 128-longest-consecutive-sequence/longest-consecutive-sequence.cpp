class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int p=nums[0];
        int len=1,maxl=1;
        for (int i=1;i<nums.size();i++){
             if (nums[i] == p) {
                continue; // Skip duplicates
            }
            else if(nums[i]==(p+1)){
                len++;
            }
            else{
                len=1;
            }
            maxl=max(maxl,len);
            p=nums[i];
        }
        return maxl;
    }
};