
#include <iostream>
using namespace std;


	int getSum(int n)
	{
		int sum = 0;
		while (n != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		return sum;
	}

int main()
{


	int x,n;
	cin >> x;
	for(int i=0;i<x;i++){
	    cin >> n;
	    cout << getSum(n) << "\n";
	}
	
	return 0;
}

