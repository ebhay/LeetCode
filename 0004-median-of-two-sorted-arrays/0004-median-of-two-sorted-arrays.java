class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m=nums1.length;
        int n=nums2.length;
        int len=m+n;
        int[] arr = new int[len];
        for(int i=0;i<m;i++){
            arr[i]=nums1[i];
        }
        int k=0;
        for(int i=m;i<len;i++){
            arr[i]=nums2[k];
            k++;
        }
        Arrays.sort(arr);
        double median;
        if (len % 2 != 0) { 
            median = arr[len / 2]; 
        } else { 
            double a = arr[len / 2 - 1]; 
            double b = arr[len / 2];     
            median = (a + b) / 2;        
        }
        return median;
    }
}