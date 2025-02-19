function calculaSalario(nomeFuncionario, salario){
    descontoAux = salario * 0.11;
    descontoMax = 713.09
    if(descontoAux > descontoMax){
        descontoPrev = descontoMax
    } else {
        descontoPrev = descontoAux;
    }

    salarioFinal = salario - descontoPrev;


    return nomeFuncionario + " o desconto previdenciário foi de R$ " + descontoPrev + ". Seu salário líquido ficou em " + salarioFinal;
}

console.log(calculaSalario("Phelipe",1000))
console.log(calculaSalario("Felipão",10000))