class Solution {
    public int findMin(int[] nums) {
        int s=0, h=nums.length-1;
        while(s<h){
            int mid=s+(h-s)/2;
            if(nums[mid]>nums[h])
            s=mid+1;
            else
            h=mid;
        }
        return nums[h];
    }
}