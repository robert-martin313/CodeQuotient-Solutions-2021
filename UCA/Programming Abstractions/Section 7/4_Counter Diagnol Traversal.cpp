/*     
 * Complete the 'counterDiagnol' function below.
 * Print the counter diagnol traversal of the matrix , seperated by space
 * @params
 *   matrix -> square matrix of size nXn 
 *   n -> integer denoting size of square matrix
 */
void counterDiagonal(int A[N][N], int n){
  for (int col = 0; col < n;col++) {
        int startcol = col, startrow = 0;
        while (startcol >= 0 && startrow < n){
            cout << A[startrow][startcol] << " ";
            startcol--;
            startrow++;
        }
    }
  for (int row = 1; row < n;row++) {
        int startrow = row, startcol = n- 1;
        while (startrow < n&& startcol >= 0) {
            cout << A[startrow][startcol] << " ";
            startcol--;
            startrow++;
        }
    }
}