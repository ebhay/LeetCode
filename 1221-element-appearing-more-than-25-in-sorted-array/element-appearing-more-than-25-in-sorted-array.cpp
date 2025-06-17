class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int k=arr[0];
        for(int i=0;i<arr.size()-1;i++){
            int s=i;
            
            while(i+1<arr.size() && arr[i]==arr[i+1])
            i++;
            if(i-s>=arr.size()/4)
            return arr[i];
        }
        return k;
    }
};