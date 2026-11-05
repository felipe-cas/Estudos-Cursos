/* INTRODUÇÃO A FUNÇÕES */
console.log("INTRODUÇÃO A FUNÇÕES")
console.log("Função que retorna se um numero é primo ou não\n")

var num = 11
console.log(`O numero ${num} é primo: ${nPrimo(num)}`)

function nPrimo(num) {
	let aux
	num % 2 == 0 ? aux = true: aux = false
	return aux
}


/* INFINITOS PARAMETROS */
console.log("\n\nINFINITOS PARAMETROS")

console.log("\nmultiplica2(1, 2, 3)\n")
multiplica2(1, 2, 3)

console.log("\nmultiplica2(4, 5, 6, 7, 8, 9)\n")
multiplica2(4, 5, 6, 7, 8, 9)


function multiplica2(...args) {
	for (let pos in args) {
		console.log(`args[${pos}] x 2 = ${args[pos] * 2}`)
	}
}



/* RECURSIVIDADE */
console.log("\n\nRECURSIVIDADE")
console.log("Calculo de fatorial com recursividade")

console.log(`\nFatorial(5) = ${fatorial(5)}`)

function fatorial(num, res = 1) {
	if (num == 0 || num == 1) {
		return 1
	} else {
		return num * fatorial(num - 1)
	}
}

