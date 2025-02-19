function valorCombustivel(tipoCombustivel, litros){
    precoGasolina = 5.3;
    precoAlcool = 4.9;
    
    if (tipoCombustivel === "G"){
        if (litros <= 20){
            valorParcial = litros * precoGasolina;
            valorTotal = valorParcial - (valorParcial * 0.04);
            return valorTotal;
        } else {
            valorParcial = litros * precoGasolina;
            valorTotal = valorParcial - (valorParcial * 0.06);
            return valorTotal;
        }
    } else if (tipoCombustivel === "A"){
        if (litros <= 20){
            valorParcial = litros * precoAlcool;
            valorTotal = valorParcial - (valorParcial * 0.03);
            return valorTotal;
        } else {
            valorParcial = litros * precoAlcool;
            valorTotal = valorParcial - (valorParcial * 0.05);
            return valorTotal;
        }
    }
    
}

console.log(valorCombustivel("G",100))