class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> arr(matrix.size(), vector<int>(matrix[0].size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                arr[i][j]=matrix[matrix[0].size()-j-1][i];
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=arr[i][j];
            }
        }
    }
};