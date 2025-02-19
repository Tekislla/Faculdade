var listaNumeros = [2,8,1,35,49,7,6,10,9,21];

soma = listaNumeros.reduce((soma, currentElement) => soma + currentElement)


maior = "Maior valor: " + Math.max(...listaNumeros);
minimo = "Menor valor: " + Math.min(...listaNumeros);
media = "Média: " + (soma/listaNumeros.length)

console.log("\n",maior,"\n", minimo,"\n", media,);

listaNumeros.push(20);

console.log("\n Valores do array com 11 elementos:","\n",listaNumeros);