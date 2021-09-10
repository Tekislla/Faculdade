var listaEstados = ["Paraná","Rio Grande do Sul", "Santa Catarina","Espírito Santo","Minas Gerais", "Rio de Janeiro", "São Paulo"];;
var maior = 0;
var palavra = null;
listaEstados.forEach(function(estado) {
    if (maior < estado.length) {
        maior = estado.length;
        palavra = estado;
    }
});
console.log(palavra);