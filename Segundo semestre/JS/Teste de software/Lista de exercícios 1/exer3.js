function salario(horas, valor){
    let mensagem = ""
    valorSalario = horas * valor
    mensagem = "O seu salário foi R$ " + valorSalario 
    return mensagem
}

salarioMensal = salario(10, 20)
console.log(salarioMensal)