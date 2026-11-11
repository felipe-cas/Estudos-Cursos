<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title>EX003</title>
</head>
<body>
	<?php 
		date_default_timezone_set("America/Sao_Paulo"); // GMT-3
		echo "<p>Hoje é dia " . date("d/M/Y") . "</p>";
		echo "<p>E a hora atual é " . date("G:i:s T") . "</p>";
	?>
</body>
</html>