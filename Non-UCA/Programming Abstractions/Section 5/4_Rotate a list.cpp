
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++){
      if(i!=n-1)
      cout << arr[i] << " ";
      if(i==n-1)
        cout << arr[i];
    }
		
		cout << "\n";
}
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n-1] = temp;
}


void leftRotate(int n)
{
	int arr[n];
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int d;
	cin >> d;
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
		printArray(arr, n);
		
}


 


int main()
{
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        leftRotate(n);
    }

	

	return 0;
}
