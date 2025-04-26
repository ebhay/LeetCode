class Solution {
public:
    void sortColors(vector<int>& arr) {
        int l=0,m=0,h=arr.size()-1;
        while(m<=h){
            if(arr[m]==0){
                arr[m]=arr[l];
                arr[l]=0;
                m++,l++;
            }
            else if(arr[m]==1){
                m++;
            }
            else{
                arr[m]=arr[h];
                arr[h]=2;
                h--;
            }
        }
    }
};