// Return true/1 if string contains all unique characters
function isUniqueChars(str){
    var arr=str.split("");
     for(var i=0;i<arr.length-1;i++)
       {
         for(var j=i+1;j<arr.length;j++)
           {
             if(arr[i]==arr[j])
               return false;
           }
       }
     return true;
   }