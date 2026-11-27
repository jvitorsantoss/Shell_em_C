#include <stdio.h>

int main(void){
	char s[] = " echo ola mundo";
	char *c = s;
	int i;
printf("Antes: %s\n",s);
	for(i = 0;*(c + i) != '\0'; i++){
		if(*(c + i) >= 'a' && *(c + i) <= 'z'){
			*(c + i) =  *(c + i) - 32;
		}


	}

printf("Depois :%s\n",c);


	return 0;
}
