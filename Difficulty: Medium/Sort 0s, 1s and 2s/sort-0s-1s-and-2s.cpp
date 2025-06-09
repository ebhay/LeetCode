class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int m=0,l=0,h=arr.size()-1;
        while(m<=h){
            if(arr[m]==1){
                m++;
            }
            else if(arr[m]==0){
                int temp=arr[l];
                arr[l]=arr[m];
                arr[m]=temp;
                m++,l++;
            }
            else{
                int temp=arr[h];
                arr[h]=arr[m];
                arr[m]=temp;
                h--;
            }
        }
    }
};