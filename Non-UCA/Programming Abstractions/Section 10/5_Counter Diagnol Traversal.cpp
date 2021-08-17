/*     
 * Complete the 'counterDiagnol' function below.
 * Print the counter diagnol traversal of the matrix , seperated by space
 * @params
 *   matrix -> square matrix of size nXn 
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int mat[N][N], int n){
  // Write your code here
  for (int slice = 0; slice < 2 * n - 1; ++slice) {

        int z = (slice < n) ? 0 : slice - n + 1;
        for (int j = z; j <= slice - z; ++j) {
            
          cout << mat[j][slice - j] << " ";
        }
        
    
    }
}