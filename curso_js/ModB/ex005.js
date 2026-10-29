/* OPERADORES DE COMPARAÇÃO */
console.log("OPERADORES DE COMPARAÇÃO\n")

console.log(`4 > 7 - ${4 > 7}`)
console.log(`4 < 7 - ${4 < 7}`)
console.log(`4 >= 7 - ${4 >= 7}`)
console.log(`4 <= 7 - ${4 <= 7}`)
console.log(`4 == 7 - ${4 == 7}`)
console.log(`4 != 7 - ${4 != 7}`)

console.log("\n ATENÇÃO: Os operadores == e != comparam apenas valores e não o tipo, portanto coisas do tipo podem acontecer:\n")
console.log(`4 == \'4\' - ${4 == '4'}`)

console.log("\nPara esses casos temos os operadores de identidades, que testam valor e tipo dos operandos\n")

console.log(`4 === \'4\' - ${4 === '4'}`)
console.log(`4 !== \'7\' - ${4 !== '7'}`)

/* OPERADORES LÓGICOS */
console.log("\n\nOPERADORES LÓGICOS\n")

console.log(`      ! true - ${! true}`)
console.log(`true && false - ${true && false}`)
console.log(`true || false - ${true || false}`)

/* OPERADOR TERNARIO */
console.log("\n\nOPERADOR TERNARIO\n")

console.log("Condição ? Caso Verdadeiro : Caso Falso\n")

console.log("media = 7")
var media = 7

console.log("var res = media > 5 ? 'Acima da média' : 'Abaixo da média'")
var res = media > 5 ? "Acima da média" : "Abaixo da média"

console.log(`media: ${res}`)