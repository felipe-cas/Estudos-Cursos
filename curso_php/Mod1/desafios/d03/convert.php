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
					$valor = $_POST['dinheiro'];
					$dolar = sprintf($valor / 5.17);

					// $valor = number_format($valor, 2, ',', '.');
					// $dolar = number_format($dolar, 2, ',', '.');

					// Biblioteca intl (Internallization PHP)

					$padrao = numfmt_create("pt_BR", NumberFormatter::CURRENCY);

					echo "<p>Seu valor de <strong>". numfmt_format_currency($padrao, $valor, "BRL") . "</strong> equivale a <strong>" . numfmt_format_currency($padrao, $dolar, "USD"). "</strong></p>";
				?>
				<p id="_aviso">
					<strong>*Cotação fixa de R$5,17 </strong>
					informado diretamente no código.
				</p>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
</body>
</html>