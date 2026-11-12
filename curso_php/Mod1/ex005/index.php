<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX005</title>

	<style>
		h1{
			text-align: center;
		}

		main{
			display: grid;
			grid-template-columns: 1fr 1fr 1fr;
		}

		section{
			text-align: center;
		}	

		#disc{
			color: red;
			font-size: .75em;
		}
	</style>
</head>
<body>
	<header>
		<h1>Tipos Primitivos</h1>
	</header>
	<main>
		<section>
			<h2>Tipos Escalares</h2>
			<?php 
				$nome 	= "Felipe";
				$idade 	= 24;
				$peso 	= 760.9;
				$doido 	= true;

				// 0x = hex - 0b = bin - 0 = oct
				$altura = 0x32b; // 768 + 32 + 11 = 811

				echo "<p>" . var_dump($nome)   . "</p>";
				echo "<p>" . var_dump($idade)  . "</p>";
				echo "<p>" . var_dump($peso)   . "</p>";
				echo "<p>" . var_dump($doido)  . "</p>";
				echo "<p>" . var_dump($altura) . "</p>";
			?>
		</section>

		<section>
			<h2>Tipos Compostos</h2>
			<?php 
				class Carro{
					public $cor = "Roxo";
				}

				function funcao() {
					echo "funcao";
				}

				$vet = [1, 2, 3, 4, 5];
				$meuCarro = new Carro();

				echo "<p>" . var_dump($vet) . "</p>";
				echo "<p>" . var_dump($meuCarro) . "</p>";
				echo "<p>" . var_dump("funcao") . "</p>";

			?>

			<p id="disc">Disclaimer: a function na real é um pseudo-tipo. Eu até tiraria mas já anotei no meu caderno...</p>
		</section>

		<section>
			<h2>Tipos Especiais</h2>
			<?php 
				$vazio = null;
				$arquivo = fopen("../ex004/index.php", "r");

				echo "<p>" . var_dump($vazio) . "</p>";
				echo "<p>" . var_dump($arquivo) . "</p>";
			?>
		</section>
	</main>
</body>
</html>