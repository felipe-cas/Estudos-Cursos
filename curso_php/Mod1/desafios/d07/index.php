<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 007</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$padrao	 = numfmt_create("pt-BR", NumberFormatter::CURRENCY);
		$salario = $_GET['salario'] ?? 1621;
		$qtd	 = intdiv($salario, 1621);
		$rest 	 = fmod($salario, 1621);

		$frase	 = "<p>Quem recebe um salário de " . numfmt_format_currency($padrao, $salario, "BRL") . " ganha <strong>$qtd salários mínimos</strong>";

		if ($rest != 0) {
			$frase .= " + " . numfmt_format_currency($padrao, $rest, "BRL");
		}

		$frase .= "</p>";
	?>
	<header>
		<h1>Desafio 007</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Informe seu Salário</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_salario">Salário:</label>
					<input type="number" name="salario" id="_salario" step="0.01" placeholder="R$" value=<?=$salario?> min=0>
				</fieldset>	
				<p>Considerando o salário mínimo de <strong><?=numfmt_format_currency($padrao, 1621, "BRL")?></strong></p>
				<button type="submit" class="btnClass">Calcular</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Resultado Final</h2>
			<section class="resultadoClass">
				<?=$frase?>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>