class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int[][] rotatedMatrix = new int[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rotatedMatrix[j][n - 1 - i] = matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = rotatedMatrix[i][j];
            }
        }
    }
}
