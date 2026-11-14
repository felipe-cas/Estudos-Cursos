<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>RESULTADO</title>
</head>
<body>
	<header>
		<h1>Resultado</h1>
	</header>
	<main>
		<?php 
			$nome  = $_GET['nome'] ?? "";
			$snome = $_GET['sobrenome'] ?? "";

			echo "Prazer em conhecer, $nome $snome!";
		?>
		<p>
			<a href="index.html">Voltar...</a>
		</p>
	</main>
</body>
</html>