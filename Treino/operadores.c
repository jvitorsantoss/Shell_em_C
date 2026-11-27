#include <stdio.h>

int main(void){
	char s[] = "cat a.txt | grep oi > b.txt";
	char *c = s;
	int i, barra, maior, espaco;
	barra = 0;
	maior = 0;
	espaco = 0;
	i =0;

	for(i =0;*(c + i) != '\0'; i++){
		if(*(c + i) == '|'){
			barra++;
			}
		else if(*(c + i) == ' '){
			espaco++;
		}
		else if(*(c + i) == '>'){
			maior++;
		}
	}
	printf(" Total de: Barras: %d, maiores %d e espacos %d\n", barra, maior, espaco);
	return 0;
}
