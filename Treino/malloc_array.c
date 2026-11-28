#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, *p;
	p = malloc(5 * sizeof(int));
	if(p == NULL ){
		printf("Sem memoria\n");

		return 1;
		}
	for(i = 0; i < 5;i++){

		*(p + i) = i * 2;
	}
	for(i = 0; i < 5; i++){
	printf("%d\n", *(p + i));
	}
	free(p);
	return 0;
}
