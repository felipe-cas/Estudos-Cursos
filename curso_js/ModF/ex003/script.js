const entradaNumero = document.getElementById("_numero")
const arrayNums = document.getElementById("_divArray")
const array = []

entradaNumero.addEventListener("keydown", function(event){
	if (event.key === "Enter") {
		let num = parseInt(document.getElementById("_numero").value)
		
		if (array.indexOf(num) != -1) {
			alert("[ERRO] Valor já inserido!")
			
		} else if (Number.isNaN(num)){
			alert("[ERRO] Entrada Invalida!")

		} else {
			array.push(num)
			addNumeroHtml(num)

		}

		entradaNumero.value = ""
	}
})


function addNumeroHtml(num) {
	let elemento = document.createElement("p")

	elemento.textContent = num
	arrayNums.appendChild(elemento)

}


function btnLimpar() {
	let qtdNums = arrayNums.childElementCount

	for (qtdNums; qtdNums != 0; qtdNums--) {
		arrayNums.removeChild(arrayNums.children[qtdNums - 1])
		array.pop()
	}
}