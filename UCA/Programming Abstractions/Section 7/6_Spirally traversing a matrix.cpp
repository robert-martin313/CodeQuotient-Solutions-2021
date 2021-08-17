void printSpiral(int a[ROWS][COLS], int r, int c){
  // Write your code here
	int i, k = 0, l = 0;
	while (k < r && l < c) {
		for (i = l; i < c; ++i) {
			cout << a[k][i] << "\n";
		}
		k++;
		for (i = k; i < r; ++i) {
			cout << a[i][c - 1] << "\n";
		}
		c--;
		if (k < r) {
			for (i = c - 1; i >= l; --i) {
				cout << a[r - 1][i] << "\n";
			}
			r--;
		}
		if (l < c) {
			for (i = r - 1; i >= k; --i) {
				cout << a[i][l] << "\n";
			}
			l++;
		}
	}
}