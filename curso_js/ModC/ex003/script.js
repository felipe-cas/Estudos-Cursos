var input1 	= document.getElementById("_num1")
var input2 	= document.getElementById("_num2")
var opcao 	= document.getElementById("_listOptions")

input1.addEventListener("input", operacao)
input2.addEventListener("input", operacao)
opcao.addEventListener("input", operacao)


function operacao() {
	let num1 = Number(document.getElementById("_num1").value)
	let num2 = Number(document.getElementById("_num2").value)

	let opc = document.getElementById("_listOptions").value

	if (opc == "Soma") {
		somar(num1, num2)
	} else if (opc == "Subtração") {
		subtrair(num1, num2)
	} else if (opc == "Multiplicação") {
		multiplicar(num1, num2)
	} else {
		dividir(num1, num2)
	}
}


function somar(num1, num2) {	
	let res = num1 + num2
	document.querySelector("#_resultado").innerText = res
}

function subtrair(num1, num2) {
	let res = num1 - num2
	document.querySelector("#_resultado").innerText = res
}

function multiplicar(num1, num2) {
	let res = num1 * num2
	document.querySelector("#_resultado").innerText = res
}

function dividir(num1, num2) {
	let res = num1 / num2
	document.querySelector("#_resultado").innerText = res
}