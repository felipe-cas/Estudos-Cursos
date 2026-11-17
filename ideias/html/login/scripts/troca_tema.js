const btnTrocaTema = document.querySelector(".mode")
const body = document.body

function trocaTema() {
	var temaAtual = document.querySelector(".mode").textContent

	if (temaAtual == "light_off") {
		btnTrocaTema.textContent = "lightbulb"
		body.classList.add("temaLight")

	} else {
		btnTrocaTema.textContent = "light_off"
		body.classList.remove("temaLight");
	}
}
