class Solution {
    public void rotate(int[] nums, int k) {
         int n = nums.length;
        // Normalize k in case it's larger than n
        k = k % n;

        if (n == 0 || k == 0) {
            return; // No rotation needed
        }

        int[] temp = new int[n];
        for (int i = 0; i < n; i++) {
            // Calculate the new position for nums[i]
            int newIndex = (i + k) % n;
            temp[newIndex] = nums[i];
        }

        // Copy elements back from temp to nums
        for (int i = 0; i < n; i++) {
            nums[i] = temp[i];
        }
    }
}