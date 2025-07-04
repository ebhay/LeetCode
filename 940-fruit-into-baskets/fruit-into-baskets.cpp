class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int l = 0, r = 0, n = arr.size(), len = 0;
        unordered_map<int, int> mp; // val -> freq

        while (r < n) {
            mp[arr[r]]++;

            while (mp.size() > 2) { // Shrink window if more than 2 types
                mp[arr[l]]--;
                if (mp[arr[l]] == 0)
                    mp.erase(arr[l]);
                l++;
            }

            len = max(len, r - l + 1);
            r++;
        }

        return len;
    }
};
