<?php
    $lista = array(5, 3, 4, 3, 4);
   	$tamanho_array = count($lista);
    $unico = 0;


    for ($i = 0; $i <= $tamanho_array; $i++){
    	$unico = $unico ^ $lista[$i];
    }
    
    print_r($lista);
    echo "Single number: " . $unico;
?>