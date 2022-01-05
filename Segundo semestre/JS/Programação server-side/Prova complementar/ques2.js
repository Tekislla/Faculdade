var listaPalavras = ["Capacete","Sol", "Usina","Joinville","Paralelepipedo", "Bola"];
var maior = 0;
var menor = 1000;
var maiorPalavra = null;
var menorPalavra = null;
listaPalavras.forEach(function(palavra) {
    if (maior < palavra.length) {
        maior = palavra.length;
        maiorPalavra = palavra;
    }
});

listaPalavras.forEach(function(palavra) {
    if (menor > palavra.length) {
        menor = palavra.length;
        menorPalavra = palavra;
    }
});

console.log("A maior palavra é: " + maiorPalavra);
console.log("A menor palavra é: " + menorPalavra);