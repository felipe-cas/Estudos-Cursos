<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX009</title>
	<style>
		*{
			padding: 0px;
			margin:  0px;
		}
		body{
			display: grid;
			grid-template-rows: 1fr 10fr;
		}

		header{
			display: flex;
			justify-content: center;
			align-items: center;
			padding: 20px;
		}

		main{
			display: grid;
			grid-template-columns: repeat(4, 1fr);
			grid-auto-rows: 220px;
			gap: 10px;

			padding: 10px;
		}

		section{
			display: grid;
			grid-template-rows: 1fr 10fr;

			background-color: lightgray;
			padding: 10px;
			padding-top: 0px;
			border-radius: 15px;
			overflow: auto;
		}

		section h2{
			text-align: center;
			position: sticky;
			top: 0;
			padding-top: 10px;

			background-color: lightgray;
		}

		.grande{
			grid-row: -1/-1;
			grid-column: 1/-1;
		}

		.grande2{
			grid-row: -2/-2;
			grid-column: 1/-1;
		}

		.medio{
			grid-row: 2/2;
			grid-column: 1/3;
		}

		.medio2{
			grid-row: 2/2;
			grid-column: 3/5;
		}
	</style>

	<?php
		setcookie("cookieTeste", date("d-m-Y"), time()+ 3600);
		session_start();
		$_SESSION['sessionTeste'] = 'teste';
	?>

</head>
<body>
	<header>
		<h1>SUPERGLOBAIS</h1>
	</header>
	<main>
		<section>
			<h2>$_GET</h2>
			<pre>
				<?php
					var_dump($_GET);
				?>
			</pre>
		</section>

		<section>
			<h2>$_POST</h2>
			<pre>
				<?php
					var_dump($_POST);
				?>
			</pre>
		</section>

		<section>
			<h2>$_REQUEST</h2>
			<pre>
				<?php
					var_dump($_REQUEST);
				?>
			</pre>
		</section>

		<section class="medio">
			<h2>$_COOKIE</h2>
			<pre>
				<?php
					var_dump($_COOKIE);
				?>
			</pre>
		</section>

		<section>
			<h2>$_SESSION</h2>
			<pre>
				<?php
					var_dump($_SESSION);
				?>
			</pre>
		</section>

		<section class="medio2">
			<h2>$_ENV</h2>
			<pre>
				<?php
					var_dump($_ENV);
				?>
			</pre>
		</section>

		<section class="grande2">
			<h2>$_SERVER</h2>
			<pre>
				<?php
					var_dump($_SERVER);
				?>
			</pre>
		</section>

		<section class="grande">
			<h2>$GLOBALS</h2>
			<pre>
				<?php
					var_dump($GLOBALS);
				?>
			</pre>
		</section>

		<section>
			<h2>$_FILES</h2>
			<pre>
				<?php
					var_dump($_FILES);
				?>
			</pre>
		</section>		
	</main>
</body>
</html>