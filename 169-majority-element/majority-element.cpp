class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj,c=0;
        for(int i =0;i<nums.size();i++){
            if(c==0){
                maj=nums[i];
                c=1;
            }
            else if(nums[i]==maj){
                c++;
            }
            else{
                c--;
            }
        }
        return maj;
    }
};