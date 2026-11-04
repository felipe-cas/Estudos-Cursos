const tabuada = document.querySelectorAll("#_tabuada ul li")
const display = document.querySelector("#_tabuada ul")

function criaTabuada() {
	let num = parseInt(document.getElementById("_numero").value)

	for (var i = 1; i <= 10; i++) {
		let res = i * num
		tabuada[i-1].innerText = `${i} x ${num} = ${res}`

	}
}

function trocaDisplay() {
	let num = document.getElementById("_numero").value

	if (num.length == 0) {
		display.style.display = "none"

	} else {
		display.style.display = "grid"

	}
}