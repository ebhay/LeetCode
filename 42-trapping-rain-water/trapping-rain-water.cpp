class Solution {
public:
    vector <int>lmax;
    vector <int>rmax;
    void maxupdater(vector<int>& height){
        lmax[0]=height[0];
        for(int i=1;i<height.size();i++){
            lmax[i]=max(height[i],lmax[i-1]);
        }
        rmax[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            rmax[i]=max(height[i],rmax[i+1]);
        }
    } 
    int trap(vector<int>& height) {
        int sum=0;
        if(height.size()<=2)
        return 0;

        lmax.resize(height.size());
        rmax.resize(height.size());

        maxupdater(height);
        for(int i=0;i<height.size();i++){
            sum+=min(lmax[i],rmax[i])-height[i];
        }
        return sum;
    }
};