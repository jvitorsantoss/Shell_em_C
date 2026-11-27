#include <stdio.h>

int main(void){

	char s[] = "ls   -la /home/kali";
	char *c = s;
	int i;
	char *prox;

	for(i = 0;*(c + i) != '\0'; i++){
		prox = c + i + 1;
		if(*(c + i) != ' '){
			printf("%c", *(c + i));
		}
		if(*(c + i) != ' ' && (*prox == ' ' || *prox == '\0')){
			printf("\n");

		}


	}

	return 0;
}
