int evenDigits(int n)
{
  int flag=0;
	if(n<0){
	    flag=1;
	    n=n*-1;
	}
	int temp=n;
	int temp2=n;

	
	int count=0;
	while (temp > 0)
	{
		int rem = temp % 10;
		if (rem % 2 == 0){
		    count++;
		    
		}
			
		
		temp = temp / 10;
	}
	int arr[count];
	int x=0;
	
	while (n > 0)
	{
		int rem = n % 10;
		if (rem % 2 == 0){
		    arr[x] = rem;
		    x++;
		    
		}
			
		
		n = n / 10;
	}
	x=0;
	for(int i=count-1;i>=0;i--){
	    x*=10;
	    x+=arr[i];
	    
	}
	if(flag==1){
	    x=x*-1;
	}
	return x;
  
}
