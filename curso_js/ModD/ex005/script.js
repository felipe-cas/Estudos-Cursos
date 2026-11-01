const tituloSexo  = document.getElementById("_tituloSexo")
const tituloIdade = document.getElementById("_tituloIdade") 

function verifDados() {
	let anoNasc = Number.parseInt(document.getElementById("_anoNasc").value)
	let tipSexo = document.querySelector('input[name="radioInput"]:checked')

	let idade = calcIdade(anoNasc)

	if (idade < 0 || idade > 200) {
		alert("[ERRO] - Verifique os dados Preenchidos")

	} else {
		tituloIdade.innerText = `${idade} Anos`

		if (tipSexo.value == "Masc") {
			tituloSexo.innerText = "Homem"

		} else {
			tituloSexo.innerText = "Mulher"

		}
	}
}

function calcIdade(ano) {
	let date = new Date()
	return date.getFullYear() - ano
}