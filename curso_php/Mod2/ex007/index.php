<?php

try {
	$resultado = 2 / 0; // Tenta dividir por zero

} catch (Throwable $error) {
	echo "[ERRO] Não é possivel dividir por zero ({$error -> getMessage()})\n";

}


echo "-----------------------------\n";

try {
	throw new Exception("Exceção Forçada"); // Força um exceção
	
} catch (Exception $e) {
	echo $e -> getMessage() . "\n";

} finally {
	echo "Fim do Programa\n";

}