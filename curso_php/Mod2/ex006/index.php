<?php

// CONTROLE GOTO

goto a;
echo "Hola\n";

b:
for ($i = 0; $i <= 100; $i++) {
	echo "teste\n";
	if ($i == 4) {
		goto c;
	}
}

a:
echo "Mundo\n\n\n";
goto b;

c:
echo "FIM\n";