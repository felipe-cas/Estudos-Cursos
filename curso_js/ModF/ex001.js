/* INTRODUÇÃO AOS ARRAYS */
console.log("INTRODUÇÃO AOS ARRAYS\n")

var a = [3, 5, 2, 1, 4]
console.log(a)

/* ITERAÇÃO COM FOR-IN */
console.log("\n\nITERAÇÃO COM FOR-IN\n")

for (let pos in a) {
	console.log(`array[${pos}] - ${a[pos]}`)
}

console.log("\n\n")

/* ALGUNS MÉTODOS */
console.log("ALGUNS MÉTODOS")

console.log("\nPUSH - Adiciona no fim do array")
a.push(6)
console.log(a)


console.log("\nPOP  - Remove do fim do array")
a.pop()
console.log(a)


console.log("\nSORT - Organiza o array")
a.sort()
console.log(a)


console.log("\nINDEXOF - Retorna o indice do elemento")
let index = a.indexOf(4)
console.log("Elemento 4 na posição " + index)