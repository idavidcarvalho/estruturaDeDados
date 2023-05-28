#include <stdio.h>

typedef struct{
	int id;
	float peso;
	float altura;
}Usuario;

void main () {
	Usuario usuario[5];
	
	int i;
	int tamanho = sizeof(usuario)/sizeof(usuario[0]);
	
	for(i=0; i<tamanho; i++){
		usuario[i].id = i;
		
		printf("Digite o peso: \r\n");
		scanf("%f", &usuario[i].peso);
		printf("Digite a altura: \n\r");
		scanf("%f", &usuario[i].altura);
		
		
	}	
	printf("Usuario2 peso: %f \r\n",usuario[1].peso);
	printf("Usuario1 altura: %f \r\n",usuario[0].altura);
}
