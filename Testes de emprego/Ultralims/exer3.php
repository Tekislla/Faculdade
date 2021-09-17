<?php
    $lista = array(2, 7, 7, 1, 8, 2, 7, 8, 7);
    $num = 16;
   	$tamanho_array = count($lista);
    $resultante = array();


    for ($i = 0; $i <= $tamanho_array; $i++){
    	if(($lista[$i] + $lista[$i+1] + $lista[$i+2]) == $num){
        	$n1 = $lista[$i];
            $n2 = $lista[$i+1];
            $n3 = $lista[$i+2];
        	$lista[$i] = $n1 . " + " . $n2 . " + " . $n3 . " = 16";
        }
    }

    foreach($lista as $numero){
        if (strlen($numero) > 4) {
            $resultante[] = $numero;
        } 
    }
    
    print_r($resultante);
?>