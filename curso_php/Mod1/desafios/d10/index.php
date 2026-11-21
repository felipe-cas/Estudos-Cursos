<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 010</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$nasc = $_GET['nasc'] ?? 2000;
		$ano  = $_GET['ano']  ?? date('Y');

		$idade = $ano - $nasc;

	?>
	<header>
		<h1>Desafio 010</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Calculando a sua Idade</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_nasc">Ano de Nascimento:</label>
					<input type="number" name="nasc" id="_nasc" required value=<?=$nasc?>>
				</fieldset>
				<fieldset class="fieldClass">
					<label for="_ano">Minha idade no ano:</label>
					<input type="number" name="ano" id="_ano" required placeholder="<?='Ano atual: ' . date('Y')?>">
				</fieldset>
				<button type="submit" class="btnClass">Qual será minha idade?</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Resultado</h2>
			<section class="resultadoClass">
				<?php 
					if ($idade < 0) {
						echo "<p>O ano de nascimento não pode ser maior que o ano atual</p>";
					} else {
						echo "<p>Quem nasceu em $nasc vai ter <strong>$idade anos</strong> em $ano!</p>";
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