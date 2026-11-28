#include <stdio.h>
#include <stdlib.h>

int main(void){
	char s[] = "kali";
	int i, tam;
	char *copia;

	for(i = 0;*(s + i) != '\0';i++){

	}

	tam = i;
	printf("tam: %d\n", tam);
	copia = malloc((tam + 1) * sizeof(char));
	if(copia == NULL){
		printf("Sem memoria");
		return 1;
	}
	for(i = 0;i < tam;i++){
		*(copia + i) = *(s + i);
	}
	*(copia + tam) = '\0';
	printf("copia: %s\n", copia);
	free(copia);

	return 0;
}
