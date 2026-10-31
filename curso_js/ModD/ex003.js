/* CONDIÇÕES PARTE 2 */
var idade = 24

/* CONDIÇÕES ANINHADAS */
console.log("CONDIÇÕES ANINHADAS\n")
console.log(`Voce tem ${idade} anos`)

if (idade < 16) {
	console.log("Não vota")
} else if (idade < 18 || idade > 65) {
	console.log("Voto Opcional")
} else {
	console.log("Voto Obrigatório")
}


/* CONDIÇÕES MULTIPLAS */

console.log("\n\nCONDIÇÕES MULTIPLAS")
console.log("Usando switch case\n")
var today = new Date()
var diaSem = today.getDay()
var diaNum = today.getDate()

var frase = `Hoje é dia ${diaNum}, `

switch (diaSem) {

	case 0:
		frase += "Domingo"
		break

	case 1:
		frase += "Segunda-Feira"
		break

	case 2:
		frase += "Terça-Feira"
		break

	case 3:
		frase += "Quarta-Feira"
		break

	case 4:
		frase += "Quinta-Feira"
		break

	case 5:
		frase += "Sexta-Feira"
		break

	case 6:
		frase += "Sabado"
		break
}

console.log(frase)