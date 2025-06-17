class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1=0,ctn1=0;
        int ele2=1,ctn2=0;
        for(int i=0;i<nums.size();i++){
            if(ele1==nums[i])
            ctn1++;
            else if (ele2==nums[i])
            ctn2++;
            else if (ctn1==0){
                ele1=nums[i];
                ctn1=1;
            }
            else if (ctn2==0){
                ele2=nums[i];
                ctn2=1;
            }

            else {
                ctn1--;
                ctn2--;
            }
        }
        vector <int> res;
        ctn1=0,ctn2=0;
        for(int i=0;i<nums.size();i++){
            if(ele1==nums[i])
            ctn1++;
            else if(ele2==nums[i])
            ctn2++;
        }
        if(ctn1>nums.size()/3)
        res.push_back(ele1);
        
        if(ctn2>nums.size()/3)
        res.push_back(ele2);

        return res;
    }
};