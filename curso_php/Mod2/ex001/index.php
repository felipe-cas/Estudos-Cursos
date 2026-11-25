<?php

// ESTRUTURAS DE REPETIÇÃO


// WHILE SIMPLES
$i = 1;
while ($i <= 10) {
	echo $i++ . " ";

	if ($i == 11) {
		echo "\n";
	}
}



// DO WHILE

$i = 10;
do {
	echo $i-- . " ";

	if ($i == 0) {
		echo "\n";
	}
} while($i >= 1);


// ESTRUTIRA FOR

for ($i = 1; $i <= 20; $i++) {
	echo "$i ";

	if ($i == 20) {
		echo "\n";
	}
}