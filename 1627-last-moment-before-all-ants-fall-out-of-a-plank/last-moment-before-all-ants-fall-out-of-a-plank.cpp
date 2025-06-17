class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int leftmax=0,rightmax=0;
        for(int i=0;i<left.size();i++){
            leftmax=max(leftmax,left[i]);// <-3<-4
        }
        for(int i=0;i<right.size();i++){
            rightmax=max(rightmax,n-right[i]);// 0->1->2->
        }
        int maxt=max(leftmax,rightmax);
        return maxt;
    }
};