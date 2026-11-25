#include <stdio.h>

int main(void){
	
	char s[] = "kali";
	char *c = s;
	int i;

	for(i = 0; *(c + i) != '\0'; i++){

		printf("%c\n", *(c + i)); 
	}
	
	printf("total de letras: %d\n", i);

		 

	for(i = i - 1; i >= 0 ; i--){
		printf("%c\n", *(c + i));
	}


	return 0;
}
