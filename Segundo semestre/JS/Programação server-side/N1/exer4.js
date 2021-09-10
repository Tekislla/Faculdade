function calculaPreco(tipo, area){
	var custoFinal = 0;
    var custoProvisorio = 0;
    var custoExcessivo = 0;

    if(tipo == 1){
        if(area >= 1000){
            custoProvisorio = area * 50;
            custoFinal = custoProvisorio - (custoProvisorio*0.05);
        } else {
            custoProvisorio = 50 * area;
            custoFinal = custoProvisorio;	
        }

	} else if(tipo == 2 && area >= 1000){
        if (area >= 1000){
		    custoProvisorio = area * 100;
		    custoFinal = custoProvisorio - (custoProvisorio * 0.05);
        }else {
		    custoProvisorio = 100 * area;
		    custoFinal = custoProvisorio;
	    }

    }else if(tipo == 3){
        if(area >= 1000){
            custoProvisorio = area * 150;
            custoFinal = custoProvisorio - (custoProvisorio * 0.05);	
        }else {
            custoProvisorio = 150 * area;
            custoFinal = custoProvisorio;
        }

    } else if(tipo == 4 && area >= 1000){
        if (area >= 1000){
            custoProvisorio = area * 250;
            custoFinal = custoProvisorio - (custoProvisorio * 0.05);
        }else {
            custoProvisorio = 250 * area;
            custoFinal = custoProvisorio;
        }
    }


    if(custoFinal>=750){
        custoExcessivo = custoFinal - 750;
        custoFinal = custoFinal - (custoExcessivo * 0.10);
	}


 	return "O valor total a ser pago é R$" + custoFinal + ",00";
}

 console.log(calculaPreco(1,1000))