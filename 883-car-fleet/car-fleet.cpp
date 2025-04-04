class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector <pair<int, double>> car(speed.size()); //[position,time taken]
        if(speed.size()==0)
            return 0;
        for(int i=0;i<speed.size();i++){
            car[i].first = position[i];
            car[i].second = (double)(target - position[i]*1.0) / speed[i];
        }
        //sort karo position wise
        sort(car.begin(), car.end()); 
        int ans=0;
        for(int i=car.size()-1;i>=1;i--){
            if(car[i].second>=car[i-1].second){
                car[i-1]=car[i];
            }
            else
                ans++;
        }
        return ans+1;
    }
};