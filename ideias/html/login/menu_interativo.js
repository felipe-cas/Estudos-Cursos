const naoTenhoCadastroHover = document.getElementById("_sectionNaoTenhoCadastro")
const tenhoCadastroHover = document.getElementById("_sectionTenhoCadastro")

const sectionHoverTexto = document.querySelectorAll(".sectionHover p")

const sectionCadastro = document.getElementById("_sectionCadastro")
const sectionLogin = document.getElementById("_sectionLogin")
const divPrincipal = document.querySelector(".divPrincipal")

var auxSection = 0

naoTenhoCadastroHover.addEventListener("mouseover", aumentaSection)
naoTenhoCadastroHover.addEventListener("mouseout",  diminuiSection)

tenhoCadastroHover.addEventListener("mouseover", aumentaSection)
tenhoCadastroHover.addEventListener("mouseout", diminuiSection)

naoTenhoCadastroHover.addEventListener("click", trocaSection)
tenhoCadastroHover.addEventListener("click", trocaSection)

function aumentaSection() {
	if (auxSection == 0) {
		divPrincipal.style.gridTemplateColumns = "5fr 1fr"
		sectionHoverTexto[1].style.visibility = "visible"
		sectionHoverTexto[1].style.opacity = "1"
	} else {
		divPrincipal.style.gridTemplateColumns = "1fr 5fr"
		sectionHoverTexto[0].style.visibility = "visible"
		sectionHoverTexto[0].style.opacity = "1"
	}
}

function diminuiSection() {
	if (auxSection == 0) {
		divPrincipal.style.gridTemplateColumns = "5fr 0.2fr"
		sectionHoverTexto[1].style.visibility = "hidden"
		sectionHoverTexto[1].style.opacity = "0"
	} else {
		divPrincipal.style.gridTemplateColumns = "0.2fr 5fr"
		sectionHoverTexto[0].style.visibility = "hidden"
		sectionHoverTexto[0].style.opacity = "0"
	}
}

async function trocaSection() {
	if (auxSection == 0) {
		divPrincipal.style.gridTemplateColumns = "0.2fr 5fr"

		await new Promise(resolve => setTimeout(resolve, 120))

		sectionLogin.style.display = "none"
		sectionCadastro.style.display = "grid"
		
		naoTenhoCadastroHover.style.display = "none"
		tenhoCadastroHover.style.display = "grid"
		auxSection = 1

	} else {
		divPrincipal.style.gridTemplateColumns = "5fr 0.2fr"

		await new Promise(resolve => setTimeout(resolve, 120))

		sectionLogin.style.display = "grid"
		sectionCadastro.style.display = "none"

		tenhoCadastroHover.style.display = "none"
		naoTenhoCadastroHover.style.display = "grid"
		auxSection = 0
	}
}