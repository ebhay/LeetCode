class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product=1;
        int ma=nums[0],mi=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=ma;
            ma=max(max(nums[i],ma*nums[i]),mi*nums[i]);
            mi=min(min(nums[i],temp*nums[i]),nums[i]*mi);
            res=max(res,ma);
        } 
        return res;  
    }

};