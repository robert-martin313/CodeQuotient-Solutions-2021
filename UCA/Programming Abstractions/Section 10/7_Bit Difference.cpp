int bitsDifferent(int num1, int num2){
	 int count = 0;
    int n = num1 ^ num2;
    while (n != 0)
    {
        n = n & n-1;
        count++;
    }
    return count;
}