function truncateString(str, num) {
    //Type your code here
    var n=str.length;
    var l=n-num;
    var sr="";
    if(l>0)
      {
       for(var i=0;i<num;i++)
         {
           sr=sr+str.charAt(i);
         }
        sr=sr+"...";
      }
    else
      {
        sr=str;
      }
    return sr;
  }