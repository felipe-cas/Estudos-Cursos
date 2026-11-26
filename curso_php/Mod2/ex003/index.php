<?php

// BREAK

$i = 0;
while (++$i) {
	switch ($i) {

		case 5:
			echo "Chegou em 5\n";
			break; // Finaliza somente o switch

		case 10:
			echo "Chegou em 10\n";
			break 2; // finaliza o switch e while

		default:
			break;
	}
	echo "$i\n";
}


// CONTINUE
echo "\n";

$numeros = [0, 1, 2, 3, 4, 5,6,7, 8, 9];

foreach ($numeros as $value) {
	if ($value % 2 === 0) {
		continue;
	}
	echo "$value ";
}
echo "\n";