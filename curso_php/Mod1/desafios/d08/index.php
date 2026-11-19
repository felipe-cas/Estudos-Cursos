<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 008</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$num = $_GET['numero'] ?? 1;
		$num_sqrt = number_format(sqrt($num), 3, ',', '.');
		$num_cbrt = number_format(pow($num, (1/3)), 3, ',', '.');
	?>
	<header>
		<h1>Desafio 008</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Informe um número</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_num">Número: </label>
					<input type="number" name="numero" id="_num" required>
				</fieldset>	
				<button type="submit" class="btnClass">Calcular Raízes</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Resultado Final</h2>
			<section class="resultadoClass">
				<p>Analisando o número <strong><?=$num?></strong>, temos:</p>
				<ul>
					<li>A sua raiz quadrada é <strong><?=$num_sqrt?></strong></li>
					<li>A sua raiz cúbica é <strong><?=$num_cbrt?></strong></li>
				</ul>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>