<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIO 004</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<header>
		<h1>DESAFIO 004</h1>
	</header>
	<main>
		<h2>Conversor de Moedas V2.0</h2>
		<div class="sectionInfo">
			<div id="_resultados">
				<?php
					$ch 	= curl_init("https://br.dolarapi.com/v1/cotacoes/usd");
					curl_setopt($ch, CURLOPT_RETURNTRANSFER, true);
					$resp 	= curl_exec($ch);
					curl_close($ch);

					$data 	= json_decode($resp, true);

					$valor 	= str_replace(",", ".", $_POST['dinheiro']);
					$dolar  = sprintf('%.2f', $data["compra"]);
					$final 	= sprintf('%.2f', ($valor / $dolar));

					$dolar	= number_format($dolar, 2, ',', '.');
					$valor 	= number_format($valor, 2, ',', '.');
					$final	= number_format($final, 2, ',', '.');

					echo "<p>Seu valor de <strong>R$ $valor</strong> equivale a <strong>US$ $final</strong></p>";
					echo "<p><strong>*Cotação dinamica: US$ $dolar </strong> informado pela <a href='https://dolarapi.com/docs/' target='_blank' id='_link'>DolarApi</a></p>";
				?>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
</body>
</html>