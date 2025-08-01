class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area=0,maxArea=0;
        while(i<j){
            area=min(height[i],height[j])*(j-i);
            maxArea=max(area,maxArea);
            if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return maxArea;
    }
};