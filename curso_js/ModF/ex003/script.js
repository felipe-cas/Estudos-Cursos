const entradaNumero  = document.getElementById("_numero")
const arrayNums		 = document.getElementById("_divArray")
const divResultado = document.querySelector("#_sectionResultados")
const divMain = document.querySelector("main")

const btnExcluir  = document.getElementById("_btnExcluir")
const btnConcluir = document.getElementById("_btnConcluir")

const array = []

var   pAnterior = ""
var   aux	= 0
var   pos 	= 0


entradaNumero.addEventListener("keydown", function(event) {
	if (event.key === "Enter") {
		let num = parseInt(document.getElementById("_numero").value)
		
		if (array.indexOf(num) != -1) {
			alert("[ERRO] Valor já inserido!")
			
		} else if (Number.isNaN(num)){
			alert("[ERRO] Entrada Invalida!")

		} else if (num < 0 || num > 100) {
			alert("[ERRO] Entrada fora do intervalo")
		} else {
			array.push(num)
			addNumeroHtml(num)

		}

		entradaNumero.value = ""
	}
})

entradaNumero.addEventListener("focus", fecharResultados)


function addNumeroHtml(num) {
	let elemento = document.createElement("p")
	
	elemento.textContent = num
	elemento.id = `_p${aux}`

	elemento.addEventListener("click", () => selectNumP(elemento.id))

	arrayNums.appendChild(elemento)
	++aux
}


function btnLimpar() {
	let qtdNums = arrayNums.childElementCount

	for (qtdNums; qtdNums != 0; qtdNums--) {
		arrayNums.removeChild(arrayNums.children[qtdNums - 1])
		array.pop()
	}

	divResultado.style.opacity = "0"
	divResultado.style.visibility = "hidden"
	divMain.style.gridTemplateColumns = "5fr 0%"

	pAnterior = ""
	aux = 0
	maiorValor = 0
	menorValor = 0

	btnConcluir.classList.remove("btnDisable")
	arrayNums.style.pointerEvents = ""
}


function mostrarResultados() {
	if (array.length != 0) {
		let divResultado = document.querySelector("#_sectionResultados")
		let divMain = document.querySelector("main")
		
		divResultado.style.opacity = "1"
		divResultado.style.visibility = "visible"
		divMain.style.gridTemplateColumns = "5fr 30%"

		btnConcluir.classList.add("btnDisable")
		calcValores()

	} else {
		alert("[ERRO] Nenhum valor inserido")

	}

}


function fecharResultados() {
	divResultado.style.opacity = "0"
	divResultado.style.visibility = "hidden"
	divMain.style.gridTemplateColumns = "5fr 0%"

	btnConcluir.classList.remove("btnDisable")
	arrayNums.style.pointerEvents = ""
}


function selectNumP(loc) {
	let pNum = document.getElementById(loc)

	if (pAnterior == "") {
		pAnterior = loc

	} else if (pAnterior != loc) {
		let pAnt = document.getElementById(pAnterior)
		pAnt.classList.remove("pNumActive")
		pAnterior = loc

	}

	pNum.classList.add("pNumActive")
	fecharResultados()
	ativaBtnExcluir()
}


function excluirElementoNum() {
	let activeElem = document.querySelector(".pNumActive")
	let pos = array.indexOf(parseInt(activeElem.textContent))

	if (pos != -1) {
		array.splice(pos, 1)
		arrayNums.removeChild(activeElem)
		pAnterior = ""

	} else {
		alert("[ERRO] Não foi possivel remover o elemento do Array")
	}
}


function ativaBtnExcluir() {
	let btnExcluir = document.getElementById("_btnExcluir")
	btnExcluir.style.visibility = "visible"
	btnExcluir.style.opacity = "1"
}


function desativaBtnExcluir() {
	let btnExcluir = document.getElementById("_btnExcluir")
	btnExcluir.style.visibility = "hidden"
	btnExcluir.style.opacity = "0"
}


document.addEventListener("click", (event) => {
  if (!arrayNums.contains(event.target)) {
    let activeElem = document.querySelector(".pNumActive")
    if (activeElem != null)
		activeElem.classList.remove("pNumActive")
		pAnterior = ""
		desativaBtnExcluir()
  }
})

function calcValores() {
	array.sort(function(a, b) {return a - b})
	let somaElementos   = somarArray()
	let mediaElementos	= somaElementos / array.length

	let resultados = [
		array.length,
		array[array.length - 1],
		array[0],
		somaElementos,
		mediaElementos.toFixed(2)
	]

	elementosResultados = document.querySelectorAll(".divRes p")
	for (let i = 0; i < elementosResultados.length; i++) {
		elementosResultados[i].textContent = resultados[i]
	}
}


function somarArray() {
	let res = 0
	for (let i = 0; i < array.length; i++) {
		res += array[i]
	}

	return res
}