function addDivWithSpans()
{
 var abc=document.createElement('div');
abc.setAttribute('id','my-div');
document.body.appendChild(abc);
var s = document.createElement("span");
var h = document.createElement("span");
var i = document.createElement("span");
s.innerHTML = "AD";
h.innerHTML = "AD";
i.innerHTML = "AD";
abc.appendChild(s);
abc.appendChild(h);
abc.appendChild(i);


}function removeParagraphs()
{
  var element=document.getElementsByTagName('p');
for (var index = element.length - 1; index >= 0; index--) {
    element[index].parentNode.removeChild(element[index]);
}
}