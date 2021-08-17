/* Type your javascript code here */
function primeCount(input) {
	let primeCount=0;
  for(var j=2;j<=input;j++)
    {
      if(checkprime(j))
        {
          primeCount++;
        }
    }
	return primeCount;
}
function checkprime(int)
{
  for(var i=2;i<=int/2;i++)
    {
      if(int%i===0)
        {
          return false;
        }
    }
  return true;
}