const resu	 = document.getElementById("_resultado")

function calcRes() {
	let inicio	= parseInt(document.getElementById("_inicio").value)
	let fim		= parseInt(document.getElementById("_fim").value)
	let passo	= parseInt(document.getElementById("_passo").value)

	let string = ""

	for (inicio; inicio <= fim; inicio += passo) {
		if (inicio >= fim) {
			string += inicio
		} else {
			string += `${inicio} > `
		}

	}

	resu.innerText = string
}
