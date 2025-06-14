class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3)
        return 0;
        sort(nums.begin(),nums.end());
        int res=nums[1]+nums[0]+nums[2];
        for(int i=0;i<nums.size()-2;i++){
            int k=i+1;
            int j=nums.size()-1;
            while(k<j){
                int sum=nums[k]+nums[j]+nums[i];
                if (abs(target - sum) < abs(target - res)) {
                    res = sum;  // ✅ update actual sum
                }

                if(sum>target)
                j--;
                else if(sum<target)
                k++;
                else{
                    return sum;
                }
            }
        }
        return res;
    }
};