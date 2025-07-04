class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int b1=arr[0],b2=-1;
        int f1=1,f2=0;
        int maxf=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==b1)
            f1++;
            else if(arr[i]==b2 || b2==-1)
            {
                b2=arr[i];
                f2++;
            }
            else//dono type ka fruite nahi hai {
            {
                b1=arr[i];
                f1=1;
                b2=arr[i-1];
                f2=1;
                int k = i - 2; // Start checking from two elements before current
                while (k >= 0 && arr[k] == b2) {
                    f2++;
                    k--;
                }
            }
            maxf=max(maxf,f1+f2);
        }
        return maxf;
    }
};