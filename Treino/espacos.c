#include <stdio.h>

int main(void){

	char s[] = "ls    -la /tmp";
	char *c = s;
		int i, palavras;
	char *prox;
	
	palavras = 0;
	


	for(i= 0; *(c + i) != '\0'; i++){
		prox = c + i + 1;
		if(*(c + i ) != ' ' && (*prox == ' ' || *prox == '\0')){ 
	
			palavras ++;
			
		}
	}
	printf("Existem %d palavras no comando", palavras);

	return 0;
}
