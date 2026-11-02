/* ESTRUTURAS DE REPETIÇÃO */

console.log("ESTRUTURAS DE REPETIÇÃO")

/* TESTE LÓGICO NO INICIO */

console.log("\nTESTE LÓGICO NO INICIO:\n")

var num 	= 1
var string  = ""

while (num <= 10) {
	if (num === 10 ) {
		string += num
	} else {
		string += `${num} - `
	}

	num++
}

console.log(string)


/* TESTE LÓGICO NO FIM */

console.log("\n\nTESTE LÓGICO NO FIM:\n")
string  = ""
num		= 10

do {
	if (num === 1)	{
		string += num
	} else {
		string += `${num} - `
	}

} while (num-- > 1)

console.log(string)

for (var i; i++; i < 10) {
	console.log("teste")
}