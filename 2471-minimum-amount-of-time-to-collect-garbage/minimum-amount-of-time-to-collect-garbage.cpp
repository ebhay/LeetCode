class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;
        int lastM = 0, lastP = 0, lastG = 0;

        for (int i = 0; i < garbage.size(); i++) {
            for (char c : garbage[i]) {
                time++; // pick up takes 1 minute
                if (c == 'M') lastM = i;
                if (c == 'P') lastP = i;
                if (c == 'G') lastG = i;
            }
        }

        // prefix sum for travel time
        vector<int> prefix(travel.size() + 1, 0);
        for (int i = 1; i < prefix.size(); i++) {
            prefix[i] = prefix[i - 1] + travel[i - 1];
        }

        time += prefix[lastM];
        time += prefix[lastP];
        time += prefix[lastG];

        return time;
    }
};