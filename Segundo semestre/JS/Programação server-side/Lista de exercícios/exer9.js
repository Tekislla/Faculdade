function anosCrescimento(pais1, pais2, taxaPais1, taxaPais2){
    
    for (anos = 0; pais1 <= pais2; anos++){
        pais1 = pais1 + (pais1 * taxaPais1);
        pais2 = pais2 + (pais2 * taxaPais2);
    }
    
    return "Demoraria " + anos + " anos para o primeiro pais atingir a populacao do segundo.";

}

console.log(anosCrescimento(80000, 200000, 0.03, 0.015))