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
					function parseNumero() {
						$num = str_replace(',', '.', $_GET['numero']);
						$pos = strripos($num, '.') ?: strlen($num);

						$p1 = str_replace('.', '', substr($num, 0, $pos));
						$p2 = substr($num, $pos + 1);

						$p1 = is_numeric($p1) ? $p1 : 0;
						$p2 = is_numeric($p2) ? $p2 : 0;

						$qt = strlen((string) $p2);

						return array(
							(float) $p1 . ',' . $p2, 	// 0 - numero completo
							$qt,						// 1 - tamanho parte fracional
							(int) $p1,					// 2 - parte intera numero
							'0,' . $p2					// 3 - parte fracionaria numero
						);
					}

					$data = parseNumero();

					echo "<p>Analisando o número <strong>" . $data[0] . "</strong></p>";
					echo "<ul><li>A parte inteira do número é <strong>" . $data[2] . "</strong></li><li>A parte fracionária do número é <strong>" . $data[3] . "</strong></li></ul>";
				?>
			</div>
			<a class="botao voltar" href="index.html">Voltar</a>
		</div>
	</main>
</body>
</html>