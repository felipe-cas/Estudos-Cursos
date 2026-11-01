const tituloSexo  = document.getElementById("_tituloSexo")
const tituloIdade = document.getElementById("_tituloIdade") 

function verifDados() {
	let anoNasc = document.getElementById("_anoNasc").value
	let tipSexo = document.querySelector('input[name="radioInput"]:checked')

	let idade = calcIdade(parseInt(anoNasc))

	if (idade < 0 || idade > 200 || anoNasc.length == 0) {
		alert("[ERRO] - Verifique os dados Preenchidos")

	} else {
		tituloIdade.innerText = `${idade} Anos`

		if (tipSexo.value == "M") {
			tituloSexo.innerText = "Homem"

		} else {
			tituloSexo.innerText = "Mulher"

		}

		selectImg(idade, tipSexo.value)
	}
}

function calcIdade(ano) {
	let date = new Date()
	return date.getFullYear() - ano
}

function selectImg(idade, sexo) {
	let divImg = document.getElementById("_imgPessoa")

	if (idade < 6) {
		// IMG BEBE
		divImg.style.backgroundImage = `url(imagens/bebe${sexo}.jpg)`

	} else if (idade < 16) {
		// IMG CRIANCA
		divImg.style.backgroundImage = `url(imagens/crianca${sexo}.jpg)`

	} else if (idade < 26) {
		// IMG ADOLESCENTE
		divImg.style.backgroundImage = `url(imagens/adolescente${sexo}.jpg)`

	} else if (idade < 50) {
		//IMG ADULTO
		divImg.style.backgroundImage = `url(imagens/adulto${sexo}.jpg)`

	} else {
		// IMG IDOSO
		divImg.style.backgroundImage = `url(imagens/idoso${sexo}.jpg)`

	}
}