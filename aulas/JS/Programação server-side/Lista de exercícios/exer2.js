function salarioTotal(carrosVendidos, totalVendas, salario, comissaoFixa){
    salarioFinal = salario + (comissaoFixa * carrosVendidos) + (totalVendas * 0.5)
    
    return "Seu salário final é de " + salarioFinal;
}


console.log(salarioTotal(2,10000,5000,1000))