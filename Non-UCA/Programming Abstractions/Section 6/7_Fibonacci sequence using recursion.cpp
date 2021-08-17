#include <bits/stdc++.h>
using namespace std;
 
void reverseFibonacci(int n)
{
    int a[n];
 
    a[0] = 0;
    a[1] = 1;
 
    for (int i = 2; i < n; i++) {
 
        a[i] = a[i - 2] + a[i - 1];
    }
 
    for (int i = n - 1; i >= 0; i--) {
 
        cout << a[i] << "\n";
    }
}
 
// Driver function
int main()
{
    int n;
  	cin >> n;
    reverseFibonacci(n);
    return 0;
}