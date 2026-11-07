const entradaNumero = document.getElementById("_numero")
const arrayNums  = document.getElementById("_divArray")
const btnExcluir = document.getElementById("_btnExcluir")
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
	elemento.id = `_p${aux}`

	elemento.addEventListener("click", () => selectNumP(elemento.textContent, elemento.id))

	arrayNums.appendChild(elemento)
	++aux
}


function btnLimpar() {
	let qtdNums = arrayNums.childElementCount
	let divResultado = document.querySelector("#_sectionResultados")
	let divMain = document.querySelector("main")

	for (qtdNums; qtdNums != 0; qtdNums--) {
		arrayNums.removeChild(arrayNums.children[qtdNums - 1])
		array.pop()
	}

	divResultado.style.opacity = "0"
	divResultado.style.visibility = "hidden"
	divMain.style.gridTemplateColumns = "5fr 0%"

	pAnterior = ""
	aux = 0
}


function btnConcluir() {
	let divResultado = document.querySelector("#_sectionResultados")
	let divMain = document.querySelector("main")
	
	divResultado.style.opacity = "1"
	divResultado.style.visibility = "visible"
	divMain.style.gridTemplateColumns = "5fr 30%"

}


function selectNumP(num, loc) {
	let pNum = document.getElementById(loc)

	if (pAnterior == "") {
		pAnterior = loc

	} else if (pAnterior != loc) {
		let pAnt = document.getElementById(pAnterior)
		pAnt.classList.remove("pNumActive")
		pAnterior = loc

	}

	pNum.classList.add("pNumActive")
	ativaBtnExcluir()
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
		activeElem.classList.remove("pNumActive")
		pAnterior = ""
		desativaBtnExcluir()
  }
})