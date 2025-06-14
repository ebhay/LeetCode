class Solution {
public:
    vector<vector <int>>res;
    void twopointer(vector<int>& arr,int target,int i,int j){
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum<target)
                i++;
            else if(sum>target)
                j--;
            else    //Result babu
            {   
                while(i<j && arr[i]==arr[i+1] )
                i++;
                while(i<j && arr[j]==arr[j-1] )
                j--;
                
                res.push_back({-target,arr[i],arr[j]});
                i++;
                j--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return {};
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int n1=arr[i];
            twopointer(arr,-n1,i+1,arr.size()-1);
            while(i+1<n && arr[i]==arr[i+1])
            i++;
        }    
        return res;
    }
};