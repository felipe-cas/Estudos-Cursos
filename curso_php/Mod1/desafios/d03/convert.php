<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIO 003</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<header>
		<h1>Desafio 003</h1>
	</header>
	<main>
		<h2>Conversor de Moedas V1.0</h2>
		<div class="sectionInfo">
			<div id="_resultados">
				<?php
					$valor = (float) str_replace(",", ".", $_POST['dinheiro']);
					$dolar = sprintf($valor / 5.22);

					$valor = number_format($valor, 2, ',', '.');
					$dolar = number_format($dolar, 2, ',', '.');

					echo "<p>Seu valor de <strong>R$ $valor</strong> equivale a <strong>US$ $dolar</strong></p>";
				?>
				<p id="_aviso">
					<strong>*Cotação fixa de R$5,22 </strong>
					informado diretamente no código.
				</p>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
</body>
</html>