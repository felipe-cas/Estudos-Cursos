<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>Desafio 002</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<header>
		<h1>Desafio 002</h1>
	</header>
	<main>
		<h2>Trabalhando com numeros aleatórios</h2>
		<div class="sectionInfo">
			<div id="_resultados">
				<?php
					$num = random_int(0, 100);
					echo "<p>Gerando um número aleatório entre <strong>0</strong> e <strong>100</strong>...</p>";
					echo "<p>O número gerado foi <strong>$num</strong></p>";
				?>
			</div>
			<a class="botao" href="index.php">Gerar Outro</a>
		</div>
	</main>
</body>
</html>