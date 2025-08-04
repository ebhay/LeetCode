class Solution {

    // Find pivot index (index of smallest element) in rotated array with duplicates
    public int pivot(int[] nums) {
        int s = 0, h = nums.length - 1;

        while (s < h) {
            // Remove duplicate edges
            while (s < h && nums[s] == nums[s + 1]) s++;
            while (s < h && nums[h] == nums[h - 1]) h--;

            int mid = s + (h - s) / 2;

            if (nums[mid] < nums[h]) {
                h = mid;
            } else if (nums[mid] > nums[h]) {
                s = mid + 1;
            } else {
                h--; // nums[mid] == nums[h], shrink window
            }
        }

        return s; // Index of minimum element
    }

    // Binary search helper
    public boolean binary(int[] nums, int s, int h, int target) {
        while (s <= h) {
            int mid = s + (h - s) / 2;
            if (nums[mid] == target) return true;
            else if (nums[mid] > target) h = mid - 1;
            else s = mid + 1;
        }
        return false;
    }

    // Main search function
    public boolean search(int[] nums, int target) {
        int pivot = pivot(nums); // get pivot index

        // Search in right sorted half
        if (target >= nums[pivot] && target <= nums[nums.length - 1]) {
            return binary(nums, pivot, nums.length - 1, target);
        } else {
            // Search in left sorted half
            return binary(nums, 0, pivot - 1, target);
        }
    }
}
