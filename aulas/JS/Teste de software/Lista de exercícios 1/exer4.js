function nomeMês(numeroMes){
    var meses = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"];
    
    return meses[numeroMes - 1];
}

mes = nomeMês(1)
console.log(mes)