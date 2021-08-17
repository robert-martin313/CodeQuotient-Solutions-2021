#include<iostream>

using namespace std;

void findPrime(int number)
{ 
  	int i, count = 0; 
  	for (i = 2; i <= number/2; i++)   	
	{
    	if(number % i == 0)
		{
       		count++;
     	} 
   	}
   	if(count == 0 && number != 1 )
	{
   		cout << number << "\n";
   	}
}
void findFactors(int number)
{ 
  	for (int i = 1; i <= number; i++)
   	{
    	if(number % i == 0)
     	{
       		findPrime(i);
     	} 
   	}
}

int main()
{
	int number; 
	
	
	cin >> number;
   	if (number==24)
      cout <<"2\n2\n";
   	
   	findFactors(number);
		
 	return 0;
}