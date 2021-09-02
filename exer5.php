<?php
    $lista = array(5, 3, 4, 3, 5, 5, 3);
	$contagem = array_count_values($lista);
	$unico = 0;


  	foreach($contagem as $numero => $value){
        if($value != 3){
            $unico = $numero;
        }
    }
  
	print_r($lista);
    echo "Single number: " . $unico;
?>
