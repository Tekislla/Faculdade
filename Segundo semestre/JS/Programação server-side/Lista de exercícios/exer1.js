function descobrePreco(precoCarro){
    percenDistrib = precoCarro * 0.28;
    impostos = precoCarro *  0.45;
    totalImpostos = percenDistrib + impostos;

    return "O custo de fábrica do carro é de " + (precoCarro - totalImpostos);
}


console.log(descobrePreco(10000))