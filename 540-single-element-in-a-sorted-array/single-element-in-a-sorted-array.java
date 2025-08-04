class Solution {
    public int singleNonDuplicate(int[] arr) {
        int s=0,h=arr.length-1;
        while(s<h){
            int mid=s+(h-s)/2;
            if(arr[mid]==arr[mid+1]){
                if(mid%2==0)
                s=mid+2;
                else
                h=mid-1;
            }
            else if(arr[mid]==arr[mid-1])
            {
                if(mid%2==0)
                h=mid-2;
                else
                s=mid+1;
            }
            else
            return arr[mid];
        }
        return arr[s];
    }
}