class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool isOne=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            isOne=true;
            if(nums[i]<=0 || nums[i]>nums.size()){
                nums[i]=1;
            }
        }
        if(isOne==false)
        return 1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i])-1;
            nums[index]=abs(nums[index])*(-1);
        }
        
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0)
           return i+1;
        }
        return nums.size()+1;
    }
};