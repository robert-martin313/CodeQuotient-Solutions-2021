function titleCase(str) {
    var arr=str.split(' ');
     var ans1='';
     for(var i=0;i<arr.length;i++)
       {
         var st=arr[i];
        var ans=capitalizeFirstLetter(st)+" ";
          ans1=ans1+ans;
       }
     return ans1;
   }
   function capitalizeFirstLetter(str) {
     return str[0].toUpperCase() + str.slice(1).toLowerCase();
   }