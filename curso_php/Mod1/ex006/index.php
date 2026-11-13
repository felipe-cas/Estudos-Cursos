<!DOCTYPE html>
<html lang="pt0br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX006</title>

	<style>
		*{
			padding: 0px;
			margin: 0px;
			box-sizing: border-box;
			font-family: verdana,sans-serif;
		}
		html, body{
			height: 100vh;
			width:  100vw;
		}

		body{
			display: grid;
			grid-template-rows: 1fr 6fr;
		}

		header{
			display: flex;
			justify-content: center;
			align-items: center;
		}

		main{
			display: grid;
			grid-template: 1fr 1fr / 1fr 1fr;
			gap: 20px;
		}

		section{
			display: flex;
			flex-flow: column nowrap;
			gap: 10px;
			align-items: center;
		}
		
		section p{
			font-size: 0.8em;
		}

		.aviso{
			font-size: .6em;
			color: red;

			margin: auto auto 5% auto;
		}

	</style>

</head>
<body>
	<header>
		<h1>STRINGS</h1>
	</header>
	<main>
		<section>
			<h2>Double Quoted</h2>
			<p>Strings interpretaveis ( " " )</p>
			<?php 
				$nome  = "Felipe";
				$snome = "de Castro";

				echo "$nome $snome";
			?>
		</section>

		<section>
			<h2>Single Quoted</h2>
			<p>Strings puras ( ' ' )</p>
			<?php
				echo '$nome $snome';
			?>
		</section>

		<section>
			<h2>Heredoc</h2>
			<p>Multiplas linhas interpretadas ( <<< )</p>
			<?php 
				echo <<< FRASE
					Apresentação:
						$nome $snome
				FRASE;
			?>
			<p class="aviso">Em HTML elas não são interpretadas</p>
		</section>

		<section>
			<h2>Nowdoc</h2>
			<p>Multiplas linhas não interpretadas ( <<< )</p>
			<?php 
				echo <<< 'FRASE'
					Apresentação:
						$nome $snome
				FRASE;
			?>
			<p class="aviso">Em HTML elas não são interpretadas</p>
		</section>
	</main>
</body>
</html>