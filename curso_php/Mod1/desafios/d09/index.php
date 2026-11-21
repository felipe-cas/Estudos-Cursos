<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 009</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php

		foreach ($_GET as $key => $value) {
			if ($value == '') {

				switch ($key) {
					case 'num1':
						$_GET[$key] = 0;
						break;
					
					case 'num2':
						$_GET[$key] = 0;
						break;

					case 'peso1':
						$_GET[$key] = 1;
						break;

					case 'peso2':
						$_GET[$key] = 1;
						break;
				}
			}
		}

		$num1 = $_GET['num1'] ?? 0;
		$pes1 = $_GET['peso1'] ?? 1;

		$num2 = $_GET['num2'] ?? 0;
		$pes2 = $_GET['peso2'] ?? 1;

		function mSimples($n1, $n2) {
			return ($n1 + $n2)/2;
		}

		function mPonderada($n1, $p1, $n2, $p2) {
			$soma = ($n1 * $p1) + ($n2 * $p2);
			return $soma / ($p1 + $p2);
		}
	?>
	<header>
		<h1>Desafio 009</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Médias Artméticas</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_num1">1° Valor</label>
					<input type="numer" name="num1" id="_num1" step="0.1" required value=<?=$num1?>>
				</fieldset>
				<fieldset class="fieldClass">
					<label for="_peso1">1° Peso</label>
					<input type="number" name="peso1" id="_peso1" required value=<?=$pes1?>>
				</fieldset>
				<fieldset class="fieldClass">
					<label for="_num2">2° Valor</label>
					<input type="number" name="num2" id="_num2" step="0.1" required value=<?=$num2?>>
				</fieldset>
				<fieldset class="fieldClass">
					<label for="peso2">2° Peso</label>
					<input type="number" name="peso2" id="_peso2" required value=<?=$pes2?>>
				</fieldset>
				<button class="btnClass">Calcular Médias</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Cálculo das Médias</h2>
			<section class="resultadoClass">
				<?php
					if ($pes1 + $pes2 == 0) {
						echo "<p>[ERRO] Divisão por zero :(</p>";	
					} else {
						$ms = number_format(mSimples($num1, $num2), 2, ',', '.');
						$mp = number_format(mPonderada($num1, $pes1, $num2, $pes2), 2, ',', '.');

						echo <<<HTML
							<p>Analisando os valores <?=$num1?> e <?=$num2?>:</p>
							<ul>
								<li>A <strong>Média Aritmética Simples</strong> entre os valores é igual a: <strong>$ms</strong></li>
								<li>A <strong>Média Aritmética Ponderada</strong> com os pesos $pes1 e $pes2 é igual a: <strong>$mp</strong> </li>
							</ul>
						HTML;
					}	
				?>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>