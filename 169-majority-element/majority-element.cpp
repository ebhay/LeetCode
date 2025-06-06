class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=1, ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
                freq++;
            }
            else if(nums[i]==ans){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;   
    }
};