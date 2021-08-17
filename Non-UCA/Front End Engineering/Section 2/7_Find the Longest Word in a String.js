function findLongestWordLength(str) {
    //Type your code here
   var arr=str.split(" ");
    var max=0;
    for(var i=0;i<arr.length;i++)
      {
        var len=arr[i].length;
        if(len>max)
          {
            max=len;
          }
      }
    return max;
  }