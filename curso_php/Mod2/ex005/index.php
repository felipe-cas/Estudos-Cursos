<?php


echo "Problema de FizzBuzz\n";

for ($i = 1; $i <= 100; $i++) {
	echo match (0) {
		$i % 15 => "FizzBuzz",
		$i % 3  => "Fizz",
		$i % 5  => "Buzz",
		default => $i,
	};
	echo " - ";
}


echo "\n\nNumeros pares\n";

for ($i = 0; $i <= 10; $i++) {
	echo match (0) {
		$i % 2 => "($i)",
		default => $i,
	};
	echo " - ";
}