<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX010</title>
	<style>
		*{
			padding: 0px;
			margin: 0px;
		}

		html, body{
			height: 100vh;
			width:  100vw;

			font-family: Helvetica;
		}

		body{
			display: grid;
			grid-template-rows: 2fr 10fr 3fr;
		}

		header{
			display: flex;
			justify-content: center;
			align-items: center;
		}

		main{
			display: flex;
			justify-content: center;
			align-items: center;
		}

		form{
			display: grid;
			grid-template-rows: 1fr 1fr 3fr;

			gap: 10px;

			height: 90%;
			width: 60%;
		}

		fieldset{
			display: flex;
			justify-content: space-evenly;
			align-items: center;

			border-radius: 5px;
		}

		#_num1, #_num2{
			height: 50%;
			width: 70%;

			border: none;
			outline: none;

			border-bottom: 1px solid black;

			font-size: 1.2em;
			padding-bottom: 5px;

			appearance: textfield;
		}

		#_enviar{
			height: 40%;
			width:  70%;

			justify-self: center;
			align-self: center;
		}

		#_resultado{
			display: grid;
			grid-template-rows: 2fr 6fr;

			justify-self: center;
			align-self: center;

		}

	</style>
</head>
<body>
	<?php
		// Capturando os dados
		$v1 = $_GET['numero1'] ?? 0;
		$v2 = $_GET['numero2'] ?? 0;

		if (!is_int($v1) || !is_int($v2)) {
			$v1 = $v2 = 0;
		}
	?>
	<header>
		<h1>Retroalimentação</h1>
	</header>
	<main>
		<form method="GET" action="<?= $_SERVER['PHP_SELF']?>">
			<fieldset>
				<label for="_num1">Numero 1:</label>
				<input type="number" name="numero1" id="_num1" value="<?=$v1?>">
			</fieldset>

			<fieldset>
				<label for="_num2">Numero 2:</label>
				<input type="number" name="numero2" id="_num2" value="<?=$v2?>">
			</fieldset>

			<button type="submit" name="enviar" id="_enviar">Enviar</button>
		</form>
	</main>
	<section id="_resultado">
			<h2>Resultados</h2>
			<?php
				$soma = $v1 + $v2;
				echo "<p>A soma dos valores equivale a: $soma</p>";	
			?>
	</section>
</body>
</html>