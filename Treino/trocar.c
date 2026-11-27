#include <stdio.h>

int main(void){
	char s[] = " ls -la /home/kali";
	char *c = s;
	int i;

	printf("Antes: %s\n", s);
	for(i = 0;*(c + i) != '\0';i++){
		if(*(c + i) == ' '){
			*(c + i) = '_';
		}



	}

	printf("Depois: %s\n", c);
	return 0;
}
