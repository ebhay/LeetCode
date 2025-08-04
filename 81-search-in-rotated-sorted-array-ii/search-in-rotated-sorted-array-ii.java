class Solution {
    public int pivot(int[] arr){
        int s=0,h=arr.length-1;
        while(s<h){
            while(s<h && arr[s]==arr[s+1])
            s++;
            while(s<h && arr[h]==arr[h-1])
            h--;
            int mid=s+(h-s)/2;
            if(arr[mid]<arr[h])
            h=mid;
            else 
            s=mid+1;
          
        }
        return s;
    }
    public boolean search(int[] arr, int s,int h, int t){
        while(s<=h){
            int mid=s+(h-s)/2;
            if(arr[mid]==t)
            return true;
            else if(arr[mid]>t)
            h=mid-1;
            else
            s=mid+1;
        }
        return false;
    }
    public boolean search(int[] arr, int target) {
        int point=pivot(arr);
        if(search(arr,point,arr.length-1,target) || search(arr,0,point-1,target)  )
        return true;
        else
        return false;
    }
}