
#include <bits/stdc++.h>
using namespace std;

int N;


void rotate90Clockwise(int N)
{
    int a[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> a[i][j];
        }
    }

	for (int i = 0; i < N / 2; i++) {
		for (int j = i; j < N - i - 1; j++) {

			int temp = a[i][j];
			a[i][j] = a[N - 1 - j][i];
			a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
			a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
			a[j][N - 1 - i] = temp;
		}
	}

for (int i = 0; i < N; i++)
{
for (int j = 0; j < N; j++)
{
  	if(j!=N-1)
	cout << a[i][j] << " ";
  else
    cout << a[i][j];
}
	

cout << "\n";
}
cout << "\n";
}





int main()
{
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        cin >> N;
        rotate90Clockwise(N);
    }


	return 0;
}
