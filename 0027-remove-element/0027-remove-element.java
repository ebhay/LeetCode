class Solution {
    public int removeElement(int[] nums, int val) {
        int k=0;
        for(int i=0;i<nums.length;i++){
                if (nums[i] != val) {
                nums[k] = nums[i]; // Copy non-'val' element to the current position
                k++; // Move to the next position
            }
            
        }
        return (k);
    }
}