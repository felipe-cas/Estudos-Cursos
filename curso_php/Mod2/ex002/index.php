<?php

// ESTRUTURA FOREACH

$array1 = [1, 2, 3, 4];

foreach ($array1 as $value) {
	echo $value . " ";
}

echo "\n\n";


$array2 = [
	"um" 	 => 1,
	"dois" 	 => 2,
	"tres" 	 => 3,
	"quatro" => 4
];

foreach ($array2 as $key => $value) {
	echo "$key => $value\n";
}

echo "\n";
// ARRAYS ANINHADOS
$array3 = [
	[1, 2],
	[3, 4],
	[5, 6]
];

foreach ($array3 as [$a, $b]) {
	echo "[$a, $b]\n";
}


echo "\n";
// ALTERANDO VALORES POR REFERENCIA

foreach ($array1 as &$value) {
	$value *= 2;
}
unset($value);

print_r($array1);