<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIO 005</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<header>
		<h1>Desafio 005</h1>
	</header>
	<main>
		<h2>Analisador de Número Real</h2>
		<div class="sectionInfo">
			<div id="_resultados">
				<?php 
					$num = str_replace(',', '.', $_GET['numero']);
					$pos = strripos($num, '.');
					
					if ($pos == false || $pos == strlen($num) - 1) {
						echo "<p>Não foi possivel Analisar esse número :(</p>";

					} else {

						$pInteiro = str_replace('.', '', substr($num, 0, $pos));
						$pFracion = str_replace('.', ',', substr($num, $pos));
						$num = $pInteiro . $pFracion;

						echo "<p>Analisando o número <strong>$num</strong></p>";
						echo "<ul><li>A parte inteira do número é <strong>$pInteiro</strong></li><li>A parte fracionária do número é <strong> 0$pFracion</strong></li></ul>";
					}
				?>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
</body>
</html>