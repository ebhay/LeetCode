class Solution {
        int maxpos(int []nums){
        int max=Integer. MIN_VALUE;
        int pos=-1; 
        for(int i=0;i<nums.length;i++){
            if(nums[i]>max){
                max=nums[i];
                pos=i;
            }
        }
        return pos;
    }
    int minpos(int []nums){
        int min=Integer. MAX_VALUE;
        int pos=-1; 
        for(int i=0;i<nums.length;i++){
            if(nums[i]<min){
                min=nums[i];
                pos=i;
            }
        }
        return pos;
    }
    public int minimumDeletions(int[] nums) {
        int max,mino;
        max=maxpos(nums);
        mino=minpos(nums);
        int option1=Math.max(max,mino)+1;
        int option2=nums.length-Math.min(max,mino);
        int mindel=Math.min(max,nums.length-max)+Math.min(mino,nums.length-mino)+1;
        return Math.min(mindel,Math.min(option1,option2));
    }
}