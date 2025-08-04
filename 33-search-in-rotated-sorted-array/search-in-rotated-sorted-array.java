class Solution {
    public int pivotelement(int[] arr){
        int s=0, h=arr.length-1;
        while(s<h){
            int mid=s+(h-s)/2;
            if(arr[mid]<arr[h])
            h=mid;
            else
            s=mid+1;
        }
        return s;
    }
    public int  binary(int[] arr, int s, int h, int t){
        while(s<=h){
            int mid=s+(h-s)/2;
            if(arr[mid]==t)
            return mid;
            else if(arr[mid]>t)
            h=mid-1;
            else
            s=mid+1;
        }
        return -1;
    }
    public int search(int[] arr, int t) {
       
        int pivot=pivotelement(arr);
        int ans=-1;
         if (arr[pivot] <= t && t <= arr[arr.length - 1]) {
            // Search in right half
            return binary(arr, pivot, arr.length - 1, t);
        } else {
            // Search in left half
            return binary(arr, 0, pivot - 1, t);
        }
    }
}