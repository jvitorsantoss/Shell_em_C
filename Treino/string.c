#include <stdio.h>

int main(void){
	int i;
	char s[] = "shell";
	char *c = s;
	printf("%d\n", (int)sizeof(s));

	printf("%c\n" , s[0]);
	printf("%c\n" , s[4]);

	printf("%d\n" , s[5]);
	
	

	printf("%c\n", *c);
	printf("%c\n", c[1]);
	printf("%c\n", *(c + 2));

		for(i = 0;*(c + i) !='\0' ; i++){
	
		printf("%c\n" , *(c + i));
		
	}

	
	return 0;
}
