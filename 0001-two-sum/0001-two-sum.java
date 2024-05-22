class Solution {
    public int[] twoSum(int[] nums, int target) {
        int len = nums.length;
        for (int i = 0; i < len - 1; i++) {
            int a = nums[i];
            for (int j = i + 1; j < len; j++) {
                int b = nums[j];
                if ((a + b) == target) {
                    return new int[]{i, j}; // Return the indices as an array
                }
            }
        }
        throw new IllegalArgumentException("No two sum solution"); // Handle case where no solution is found
    }
}
