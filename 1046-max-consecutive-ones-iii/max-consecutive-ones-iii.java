class Solution {
    public int longestOnes(int[] nums, int k) {
        int z=0, len=0;
        int start=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0)
            z++;
            while(z>k){
                if(nums[start]==0)
                z--;
                start++;
            }
            len=Math.max(len,i-start+1);
        }
        return len;
    }
}