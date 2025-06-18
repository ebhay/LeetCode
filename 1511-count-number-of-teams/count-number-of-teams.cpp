class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int team=0;
        for(int i=0;i<rating.size();i++){
            int smaller=0,greater=0;
        int dsmaller=0,dgreater=0;
            for(int j=0;j<i;j++){
                if(rating[j]<rating[i])
                smaller++;
                if(rating[j]>rating[i])
                dgreater++;
            }
            
            for(int j=i+1;j<rating.size();j++){
                if(rating[j]>rating[i])
                greater++;
                if(rating[j]<rating[i])
                dsmaller++;
            }
            team+=greater*smaller+dgreater*dsmaller;
        }
        return team;
    }
};