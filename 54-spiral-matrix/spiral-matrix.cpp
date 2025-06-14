class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> arr;
        int srow = 0, scol = 0, erow = matrix.size() - 1;
        int ecol = cols - 1;;
        while (srow <= erow && scol <= ecol) {
            // Top Position
            for (int j = scol; j <= ecol; j++) {
                arr.push_back(matrix[srow][j]);
            }

            // Right Position
            for (int j = srow + 1; j <= erow; j++) {
                arr.push_back(matrix[j][ecol]);
            }
            // Bottom Position
            for (int j = ecol - 1; j >= scol; j--) {
                if(erow==srow)
                break;
                arr.push_back(matrix[erow][j]);
            }
            //Left Position
            for (int j = erow -1; j > srow; j--) {
                if(scol==ecol)
                break;
                arr.push_back(matrix[j][scol]);
            }
            srow++;scol++;ecol--;erow--;
        }
        return arr;
    }
};