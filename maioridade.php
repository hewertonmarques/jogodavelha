<?php
    $nome = $_GET["nome"];
    $idade = $_GET["idade"];

    echo "".$nome."".$idade."";
    if($idade >=18) {
        echo "Adulto";
    }else{
        echo "Menor";
    }
?>