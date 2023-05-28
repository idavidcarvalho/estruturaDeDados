#include <stdio.h>

void main () {
	
	printf("----Vetores---- \r\n");
	
	int v[3];
	
	v[0] = 2;
	v[1] = 5;
	v[2] = 10;
	
	printf("\r\ntamanho em bytes: %i bytes \r\n", sizeof(v));
	printf("tamanho dos elementos do vetor: %i \r\n", sizeof(v)/sizeof(int));
	
	printf("\r\nelementos do vetor: \r\n");
	int i;
	for(i=0; i< sizeof(v)/sizeof(int); i++) {
		
		printf("%d \r\n", v[i]);
	}
}
