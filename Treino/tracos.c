#include <stdio.h>

int main (void){


	char s[] = "ls -la -a -h";
	char *c = s;
	int traco;
	int i;


	traco = 0;
	for(i = 0; *(c + i) != '\0'; i++){
		if(*(c + i) == '-'){

			traco++;
		
	

		}


	

	}

	printf("Totais de tracos sao: %d \n", traco);

	return 0;
}
