#include <stdio.h>

int main (void){	



	char s[] = "kali linux";
	char *c = s;
	
	int i, vogais;

	vogais = 0;	

	for(i = 0;*(c + i) != '\0'; i++){
		if(*(c + i) == 'a' || *(c + i) == 'e' || *(c + i) == 'i' || *(c + i) == 'o' ||*(c + i) == 'u'){

			vogais++;
			
		}
		
	}
	
	printf("%d\n", vogais);

	return 0;
}
