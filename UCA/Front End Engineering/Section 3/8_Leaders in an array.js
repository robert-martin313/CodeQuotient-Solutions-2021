// Return an array containing the leaders
function findTheLeaders(arr, n ){
    var result=[];
        var max=arr[n-1];
    result.push(max);
    for(var i=n-2;i>=0;i--)
      {
        if(arr[i]>max)
          {
            result.unshift(arr[i]);
            max=arr[i];
          }
      }
    return result;
  }