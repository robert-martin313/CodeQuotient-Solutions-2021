
#include <iostream>

using namespace std;

int main()
{
    int i,j,k,x;
    cin >> x;
    for (i=x;i>=1;i--) {
        for (j=1;j<x;j++) {
            if(j<=i)
               
                cout << j;
            else
                
                cout << "*";
        }
        for (j=x;j>=1;j--) {
            if(j<=i)
                
                cout << j;
            else
                
                cout << "*";
        }
        printf("\n");
    }
    return 0;
}
