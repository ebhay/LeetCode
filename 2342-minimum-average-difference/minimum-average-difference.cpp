class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum=0,csum=0,avg=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int favg=INT_MAX,ind=-1;
        for(int i=0;i<nums.size();i++){
            int ravg;
            csum+=nums[i];
            if(i==nums.size()-1)
            ravg=0;
            else
            ravg=(sum-csum)/(nums.size()-i-1);
            avg = abs((csum / (i + 1)) - ravg);
            if(favg>avg){
                favg=avg;
                ind=i;
            }
        }
        return ind;
    }
};