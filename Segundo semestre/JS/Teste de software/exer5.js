function maiorNumero(n1, n2){
    
    if (typeof n1 == typeof n2 && typeof n1 == "number"){
        return n1 >= n2;
    } else {
        return "Tipos diferentes. Insira números."
    }

}


console.log(maiorNumero(20, 10))