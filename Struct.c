#include <stdio.h>

typedef struct {
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
}Aluno;

void main() {
	Aluno aluno1, aluno2;
	
	aluno1.nota1 = 5.4;
	aluno1.nota2 = 8.4;
	aluno1.nota3 = 6.0;
	aluno1.nota3 = 3.0;
	aluno1.media = (aluno1.nota1+aluno1.nota2+aluno1.nota3+aluno1.nota4)/4;
	
	printf("A média do aluno1 é: %f \r\n", aluno1.media);	
	
	
}
