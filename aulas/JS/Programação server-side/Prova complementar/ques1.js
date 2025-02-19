function calculaEmprestimo(nomeSolicitante, rendaMensal, valorSolicitado, nrPrestacoes){
    txJuros = 0;
    valorDisponivel = rendaMensal * 10;
    valorEmprestimo = valorSolicitado;

    if (nrPrestacoes < 5){
        txJuros = 0;
    } else if(nrPrestacoes >= 50 && nrPrestacoes <= 100){
        txJuros = 0.04;
    } else {
        txJuros = 0.08;
    }

    valorJuros = valorSolicitado * txJuros;
    valorEmprestimo = valorSolicitado + valorJuros;
    valorPrestacao = valorEmprestimo / nrPrestacoes;
    valorMaxPrestacao = rendaMensal * 0.35;

    if (valorSolicitado > valorDisponivel){
        return "Empréstimo não pode ser concedido. Motivo: O valor solicitado ultrapassa o seu valor disponível para empréstimo. Valor disponível para empréstimo: R$ " + valorDisponivel;
    } else if (valorPrestacao > valorMaxPrestacao){
        return ("Empréstimo não pode ser concedido. Motivo: O valor da prestação excede 35% de sua renda. Valor máximo de prestação: R$ " + valorMaxPrestacao)
    } else {
        return nomeSolicitante + ": Seu empréstimo de R$ " + valorEmprestimo + ", com " + nrPrestacoes + " parcelas de R$ " + valorPrestacao + " será concedido.";
    }

}

console.log(calculaEmprestimo("Phelipe",1000, 5000, 50))
console.log(calculaEmprestimo("Phelipe",1000, 5000, 2))
console.log(calculaEmprestimo("Phelipe",1000, 50000, 2))