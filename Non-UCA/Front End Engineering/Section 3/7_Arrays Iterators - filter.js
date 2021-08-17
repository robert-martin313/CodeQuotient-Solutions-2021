/* Type your javascript code here */
function removeEven(input) {
    var myarr=input.filter((item)=>
  {
      return item%2!=0;
  })
    return myarr;
  }