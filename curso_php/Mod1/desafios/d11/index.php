<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>DESAFIOS 011</title>
	<link rel="stylesheet" type="text/css" href="style.css">
</head>
<body>
	<?php
		$preco = $_GET['preco'] ?? 0;
		$perce = $_GET['perc'] ?? 25;

		$padrao = numfmt_create('pt-BR', NumberFormatter::CURRENCY);

		function calcPerc($pr, $pc) {
			$parte = ($pr * $pc) / 100;
			return $pr + $parte;
		}
	?>
	<header>
		<h1>Desafio 011</h1>
	</header>
	<main>
		<section class="sectionClass" id="_sectionForm">
			<h2>Informe um número</h2>
			<form method="GET" action=<?=$_SERVER['PHP_SELF']?>>
				<fieldset class="fieldClass">
					<label for="_preco">Preço do Produto</label>
					<input type="number" name="preco" id="_preco" placeholder="R$" required>
				</fieldset>	
				<fieldset class="fieldSlide">
					<label for="_perc" id="_labelSlide">Qual será o percental de reajuste? (25%)</label>
					<input type="range" name="perc" id="_perc" min="0" max="100" step="1" value="25">
				</fieldset>
				<button type="submit" class="btnClass">Reajustar</button>
			</form>
		</section>
		<section class="sectionClass" id="_sectionResul">
			<h2>Resultado do Reajuste</h2>
			<section class="resultadoClass">
				<?php
					echo "<p>O produtoque custava " . numfmt_format_currency($padrao, $preco, 'BRL') . " com <strong>$perce% de aumento</strong> vai passar a custar <strong>" . numfmt_format_currency($padrao, calcPerc($preco, $perce), 'BRL') . "</strong> a partir de agora.</p>";
				?>
			</section>
		</section>
	</main>
	<footer>
		<p>Made by me... :)</p>
	</footer>
	<script>
		var slide = document.querySelector('#_perc')
		var label = document.querySelector('#_labelSlide')

		slide.addEventListener('input', () => {
			label.textContent = `Qual será o percental de reajuste? (${slide.value}%)`;
		})
	</script>
</body>
</html>