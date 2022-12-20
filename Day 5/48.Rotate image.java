class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int [][] rotateMat = new int [n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotateMat[i][j]=matrix[(n-1)-j][i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=rotateMat[i][j];
            }
        }
        
    }
}
