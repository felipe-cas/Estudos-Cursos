<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX008</title>
	<style>
		header{
			text-align: center;
		}

		main *{
			padding: 0px;
			margin: 0px;
			line-height: 1.5em;
		}

		main h2, main p{
			display: inline-block;
		}

		main h2{
			margin-top: 20px;
		}

		section{
			height: 100px;
			border-bottom: 1px solid black;
		}

	</style>
</head>
<body>
	<header>
		<h1>FUNÇÕS ARTIMÉTICAS</h1>
	</header>
	<main>
		<section>
			<h2 >abs()</h2>
			<p> - Valor absoluto</p>
			<?php 
				echo "<br>abs(-500) -> " . abs(-500);
			?>
		</section>
		<section>
			<h2>base_convert()</h2>
			<p> - conversor de bases numéricas</p>
			<?php
				echo "<br>base_convert(24, 10, 2) -> " . base_convert(24, 10, 2);
			?>
		</section>
		<section>
			<h2>ceil()</h2>
			<p> - Arredonda para cima</p>
			<?php
				echo "<br>ceil(3.2) -> " . ceil(3.2);
			?>
		</section>
		<section>
			<h2>floor()</h2>
			<p> - Arredonda para baixo</p>
			<?php 
				echo "<br>floor(3.8) -> " . floor(3.8);
			?>
		</section>
		<section>
			<h2>round()</h2>
			<p>Arredondamento aritimético</p>
			<?php
				echo "<br>round(3.2) -> " . round(3.2);
				echo "<br>round(3.7) -> " . round(3.7);
			?>
		</section>
		<section>
			<h2>hypot()</h2>
			<p> - Calcula hypotenusa</p>
			<?php
				echo "<br>hypot(3, 4) -> " . hypot(3, 4);
			?>
		</section>
		<section>
			<h2>intdiv()</h2>
			<p> - Calcula divisão inteira</p>
			<?php
				echo "<br>intdiv(5, 2) -> " . intdiv(5, 2);
			?>
		</section>
		<section>
			<h2>min()</h2>
			<p> - Mostra o valor minimo de uma sequencia/vetor</p>
			<?php
				echo "<br>min([3, 4, 5, 6, 7, 8]) ->" . min([3, 4, 5, 6, 7, 8]);
			?>
		</section>
		<section>
			<h2>max()</h2>
			<p> - Mostra o valor maximo de uma sequencia/vetor</p>
			<?php
				echo "<br>max([3, 4, 5, 6, 7, 8]) ->" . max([3, 4, 5, 6, 7, 8]);
			?>
		</section>
		<section>
			<h2 >pi()</h2>
			<p> - Valor de pi</p>
			<?php 
				echo "<br>pi() -> " . pi();
			?>
		</section>
		<section>
			<h2 >pow()</h2>
			<p> - Calcula potencia</p>
			<?php 
				echo "<br>pow(3, 2) -> " . pow(3, 2);
			?>
		</section>
		<section>
			<h2 >sqrt()</h2>
			<p> - Calcula raiz quadrada</p>
			<?php 
				echo "<br>sqrt(81) -> " . sqrt(81);
			?>
		</section>
		<section>
			<h2>sin()</h2>
			<p> - Calcula seno</p>
			<?php
				echo "<br>sin(45) -> " . sin(45);
			?>
		</section>
		<section>
			<h2>cos()</h2>
			<p> - Calcula coseno</p>
			<?php
				echo "<br>cos(45) -> " . cos(45);
			?>
		</section>
		<section>
			<h2>tan()</h2>
			<p> - Calcula tangente</p>
			<?php
				echo "<br>tan(45) -> " . tan(45);
			?>
		</section>
	</main>
</body>
</html>