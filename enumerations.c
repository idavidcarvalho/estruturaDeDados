#include <stdio.h>

enum diasDaSemana {segunda, terca, quarta, quinta, sexta};

void main () {
	enum diasDaSemana dia;
	
	dia = segunda;
	
	printf("dia: %d \r\n", dia);
}
