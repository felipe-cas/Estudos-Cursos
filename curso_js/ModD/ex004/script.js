const txtHora = document.getElementById("_txtHora")
const divImg  = document.getElementById("_divImgHora")
const body	  = document.body

setHora()
setInterval(setHora, 60000)

function setHora() {
	let date = new Date()
	let hora = date.getHours()

	txtHora.innerHTML = `<p>Agora são ${hora} horas</p>`

	if (hora <= 4) {
		// Madrugada
		divImg.style.backgroundImage = "url(imagens/madrugada.jpg)"
		body.style.backgroundColor 	 = "var(--corMadrugada)"

	} else if (hora <= 8) {
		// Manhã
		divImg.style.backgroundImage = "url(imagens/manha.jpg)"
		body.style.backgroundColor 	 = "var(--corManha)"

	} else if (hora <= 12) {
		// Dia
		divImg.style.backgroundImage = "url(imagens/dia.jpg)"
		body.style.backgroundColor 	 = "var(--corDia)"

	} else if (hora <= 16) {
		// Almoco
		divImg.style.backgroundImage = "url(imagens/almoco.jpg)"
		body.style.backgroundColor 	 = "var(--corAlmoco)"

	} else if (hora <= 20) {
		// Tarde
		divImg.style.backgroundImage = "url(imagens/tarde.jpg)"
		body.style.backgroundColor 	 = "var(--corTarde)"

	} else {
		// Noite
		divImg.style.backgroundImage = "url(imagens/noite.jpg)"
		body.style.backgroundColor 	 = "var(--corNoite)"

	}
}