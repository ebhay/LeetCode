class Solution {
public:
    bool canJump(vector<int>& nums) {
        int curmax=0,end=0;
        for(int i=0;i<nums.size();i++){
            curmax=max(curmax,i+nums[i]);
            if(i==end){
                end=curmax;
            }
            if(i>end)
            return false;
        }
        return true;
    }
};