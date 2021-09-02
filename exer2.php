<?php
    $lista = array(-1,0,1,2,-1,-4);
   	$tamanho_array = count($lista)-1;
    $resultante = array();


    for ($i = 0; $i <= $tamanho_array; $i++){
    	if(($lista[$i] + $lista[$i+1] + $lista[$i+2]) == 0){
        	$n1 = $lista[$i];
            $n2 = $lista[$i+1];
            $n3 = $lista[$i+2];
        	$lista[$i] = $n1 . " + " . $n2 . " + " . $n3 . " = 0";
        }
    }
    
    foreach($lista as $numero){
        if (strlen($numero) > 4) {
            $resultante[] = $numero;
        } 
    }
    
    print_r($resultante);
?>