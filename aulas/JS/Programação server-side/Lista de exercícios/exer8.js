function anosCrescimento(){
    var pais1 = 80000;
    var pais2 = 200000;
    
    for (anos = 0; pais1 <= pais2; anos++){
        pais1 = pais1 + (pais1 * 0.03);
        pais2 = pais2 + (pais2 * 0.015);
    }
    
    return "Demoraria " + anos + " anos para o primeiro pais atingir a populacao do segundo.";

}

console.log(anosCrescimento())