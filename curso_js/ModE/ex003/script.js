const resu	 = document.getElementById("_resultado")

function calcRes() {
	let inicio	= parseInt(document.getElementById("_inicio").value)
	let fim		= parseInt(document.getElementById("_fim").value)
	let passo	= parseInt(document.getElementById("_passo").value)

	let string = ""

	let aux = valid(inicio, fim, passo)

	if (aux) {

		if (passo > 0) {
			for (inicio; inicio <= fim; inicio += passo) {
				string += `${inicio} > `
			}
			
		} else {
			for (inicio; inicio >= fim; inicio += passo) {
				string += `${inicio} > `
			}
		}

		resu.innerText = string += "FIM"
	}
}

function btnLimpar() {
	let entradas = document.querySelectorAll(".inputNum")

	for (let i = 0; i != 3; i++) {
		entradas[i].value = ""
	}

	resu.innerText = "Aguardando entradas para a contagem..."
}

function valid(inicio, fim, passo) {
	let msg = ""
	let aux = false

	if (inicio.toString() == "NaN" || fim.toString() == "NaN" || passo.toString() == "NaN") {
		msg = "[ERRO] - Nenhum campo pode ficar vazio"

	} else if (inicio > fim && passo > 0) {
		msg = "[ERRO] - Inicio maior que o fim, passo deve ser negativo"

	} else if (inicio < fim && passo < 0) {
		msg = "[ERRO] - Inicio menor que o fim, passo deve ser positivo"

	} else if (passo == 0) {
		msg = "[ERRO] - Passo igual a 0"

	} else {
		aux = true
	}

	if (!aux) {
		alert(msg)
	}

	return aux
}