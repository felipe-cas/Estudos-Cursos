<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 006</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$dividendo 	= $_GET['num1'] ?? 0;
		$divisor	= $_GET['num2'] ?? 1;

		if ($divisor == 0) {
			$divisor = 1;
		}

		$resultado	= intdiv($dividendo, $divisor);
		$resto 		= $dividendo % $divisor;
	?>
	<header>
		<h1>Desafio 006</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Anatomia de uma Divisão</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_num1">Dividendo:</label>
					<input type="number" name="num1" id="_num1" value=<?=$dividendo?> required>
				</fieldset>
				<fieldset class="fieldClass">
					<label for="_num2">Divisor:</label>
					<input type="number" name="num2" id="_num2" value=<?=$divisor?> required>
				</fieldset>
				<button type="submit" class="btnClass">Analisar</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Estrutura da Divisão</h2>
			<section class="resultadoClass">
				<div class="bordaEsquerda">
					<?="<p>$dividendo</p>"?>
				</div>
				<div class="bordaBaixo">
					<?="<p>$divisor</p>"?>
				</div>
				<div class="bordaEsquerda">
					<?="<p>$resto</p>"?>
				</div>
				<div>
					<?="<p>$resultado</p>"?>
				</div>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>