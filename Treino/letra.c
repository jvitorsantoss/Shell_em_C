#include <stdio.h>

int main(void){

	char s[] = "hello world";
	char *c = s;
	int i, letra;

	letra = 0;
	for(i = 0;*(c + i) != '\0'; i++){
		if(*(c + i) == 'l'){

		letra++;


		}



	}

	printf(" Quantidade de letras l sao: %d\n", letra);


	return 0;
}
