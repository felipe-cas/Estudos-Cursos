<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIO 001</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<header>
		<h1>DESAFIO 001</h1>
	</header>
	<main>
		<h2>Resultados</h2>
		<div class="sectionInfo">
			<div id="_resultados">
				<?php
					$num = $_GET['numero'];

					echo "<p class='resultado'>O numero escolhido foi $num</p>";
					echo "<p class='resultado'>O seu antecessor é " . $num - 1 . "</p>";
					echo "<p class='resultado'>O seu sucessor é " . $num + 1 . "</p>";
				?>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
	<script>
		function voltarPagina() {
			document.location = "http://localhost:4444"
		}
	</script>
</body>
</html>