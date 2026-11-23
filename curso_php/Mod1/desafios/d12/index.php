<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 012</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$seg = $_GET['seg'] ?? 0;
		$total = $_GET['seg'] ?? 0;

		function calcTemp($seg) {

			$sem =  intdiv($seg, 604800);
			$seg -= ($sem * 604800);

			$dia =  intdiv($seg, 86400);
			$seg -= ($dia * 86400);

			$hor =  intdiv($seg, 3600);
			$seg -= ($hor * 3600);

			$min =  intdiv($seg, 60);
			$seg -= ($min * 60);

			return array($sem, $dia, $hor, $min, $seg);
		}
	?>
	<header>
		<h1>Desafio 012</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Calculadora de Tempo</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_seg">Total de segundos:</label>
					<input type="number" name="seg" id="_seg" value=<?=$total?>>
				</fieldset>	
				<button type="submit" class="btnClass">Calcular</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Totalizando Tudo</h2>
			<section class="resultadoClass">
				<?php
					
					$dados = calcTemp($seg);

					echo <<<HTML
						<p>Analisano o valor que você digitou, <strong>$total segundos</strong> equivalem a um total de:</p>
						<ul>
							<li>$dados[0] Semanas</li>
							<li>$dados[1] Dias</li>
							<li>$dados[2] Horas</li>
							<li>$dados[3] Minutos</li>
							<li>$dados[4] Segundos</li>
						</ul>
					HTML;
				?>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>