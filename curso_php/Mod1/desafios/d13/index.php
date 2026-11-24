<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 013</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php 
		$numero = $_GET['numero'] ?? 0;
		$padrao = numfmt_create('pt-BR', NumberFormatter::CURRENCY);

		function calcNotas($valor) {
			$notas = array();

			$notas['n100'] 	= intdiv($valor, 100);
			$valor -= $notas['n100'] * 100;

			$notas['n50'] 	= intdiv($valor,  50);
			$valor -= $notas['n50']  * 50;

			$notas['n10'] 	= intdiv($valor,  10);
			$valor -= $notas['n10']  * 10;

			$notas['n5'] 	= intdiv($valor,   5);

			return $notas;
		}
	?>
	<header>
		<h1>Desafio 013</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Caixa Eletrônico</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<h3><label for="_num">Qual Valor deseja sacar?</label></h3>
				<fieldset class="fieldClass">
					<input type="number" name="numero" id="_num" placeholder="R$" step=5 min=5 required>
				</fieldset>	
				<p id="notasDisponiveis"><strong>*</strong> Notas Disponiveis: 
					<strong>R$100</strong>, 
					<strong>R$50</strong>, 
					<strong>R$10</strong> e 
					<strong>R$5</strong>
				</p>
				<button type="submit" class="btnClass">Sacar</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Saque</h2>
			<section class="resultadoClass">
				<?php
					$notas = calcNotas($numero);

					if ($numero != 0) {

						echo "<h3>Saque de " . numfmt_format_currency($padrao, $numero, 'BRL') . " realizado!</h3>";
						echo "<p>O caixa eletrônico vai te entregar as seguintes notas:</p>";
					}
				?>

				<div class="notasSaque">
					<?php
						if ($numero != 0) {
							foreach ($notas as $key => $value) {
								if ($value != 0) {
									echo <<<HTML
										<div class='notaClass'>
											<img src="imagens/$key.jpg" class="imagemNota">
											<p>
												<strong>$value x</strong>
											</p>
										</div>
									HTML;
								}
							}
						}
					?>
				</div>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
</body>
</html>