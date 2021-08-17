function reverseString(str) {
    var l=0;
  var h=str.length;
 var arr=str.split('');
  while(l<h)
    {
      var temp=arr[l];
      arr[l]=arr[h];
      arr[h]=temp;
      l++;
      h--;
    }
  return arr.join('');
}