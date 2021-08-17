function changeParaText(event) {
	event.target.innerText = 'Yay! you added the event listener.'
}
var h=document.querySelector('p');
h.addEventListener("click",changeParaText);