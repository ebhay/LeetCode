class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum=0,rsum=0,l=0,r=0,sum=0;
        int i;
        for( i=0;i<k;i++){
            lsum+=arr[i];
        }
        i=k-1;
        r=arr.size()-1;
        sum=lsum;
      while (i >= 0) {
            lsum -= arr[i];
            rsum += arr[r];
            sum = max(sum, lsum + rsum);
            i--;
            r--;
        }
        return sum;
    }
};