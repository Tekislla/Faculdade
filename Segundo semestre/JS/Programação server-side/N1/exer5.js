saqueBanco(181)


function saqueBanco(valor){
    var cofre = [100,50,20,10,5,2];

    var notaMax = function(valor,indice){
        var i = indice;
        while (i < cofre.length && cofre[i] > valor){
            i++;
        }
        return i;
    }

    var saqueRec = function(valor,indice){
        var saque = [];
        var indiceMax = notaMax(valor,indice);
        if (indiceMax >= cofre.length) {
            return [];
        }

        for (var i = indiceMax; i < cofre.length; i++){
            var resto = valor - cofre[i];

            if (resto == 0){
                return [cofre[i]];
            }

            for (var j = i; j < cofre.length; j++){
                var saqueResto = saqueRec(resto,j);

                if (saqueResto.length > 0){
                    saqueResto.unshift(cofre[i]);
                    return saqueResto;
                }
            }
        }

        return [];
    }


    var saque = function(valor){
        return saqueRec(valor,0);
    }

    console.log("Sacando " + saque(valor).toString() + " para R$" + valor.toString() + ",00");
}