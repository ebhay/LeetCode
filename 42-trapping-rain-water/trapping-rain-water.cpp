class Solution {
public:
    vector <int> left(vector<int> & arr){
        int maxl=0;
        vector<int> leftmax(arr.size());
        for(int i = 0; i < arr.size(); i++){
            if(arr[i]>maxl){
                maxl = arr[i];
                leftmax[i]=0;
            }
            else{
                leftmax[i]=maxl;
            }
        }
        return leftmax;
    }
    vector <int> right(vector<int>& arr){
        int maxr=0;
        vector<int> rightmax(arr.size());
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i]>maxr){
                maxr = arr[i];
                rightmax[i]=0;
            }
        else{
            rightmax[i]=maxr;
            }
        }
        return rightmax;
    }
    int trap(vector<int>& arr) {
        vector<int> lr=left(arr);
        vector<int> rr=right(arr);
        int sum=0;
    // Print original array
    for(int i=0;i<arr.size();i++){
        int minimum = (lr[i] < rr[i]) ? lr[i] : rr[i];
        if(minimum == 0){
          sum+=0;
        }
        else{
           sum+=minimum-arr[i];
        }
    }

    return sum;

    }
};