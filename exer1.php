<?php
    $lista = array(1,2,3,6,7,8);
    $lista2 = array(1,2,3,6,7,8);
   	$tamanho_array = count($lista);


    for ($i = 0; $i <= $tamanho_array; $i++){
    	if($lista[$i + 1] != $lista[$i]+1){
        	$lista[$i+1] = $lista[$i]+1;
        }
    }
    
    $faltantes = array_diff($lista, $lista2);

    print_r($faltantes);
?>