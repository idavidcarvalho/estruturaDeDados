#include <stdio.h>
void bubble_sort(int *v, int tamanho) {
		int i, j, temp;

		for(i=tamanho-1; i>=1; i--) {
			for (j=0; j<i; j++) {
				if (v[j] > v[j+1]) {
		
					temp = v[j];
					v[j] = v[j+1];
					v[j+1] = temp;	
				}
			}
		}
}


int main(void) {
	int vetor[9] = {-11, 8, 4, 7, 3, 1, 2, 5, 6};
	bubble_sort(vetor, 9);

	for(int i=0; i<9; i++) {
		printf("%i, ", vetor[i]);
	}
	printf("\r\n");
}
