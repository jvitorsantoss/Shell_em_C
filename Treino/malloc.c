#include <stdio.h>
#include <stdlib.h>

int main(void){

	int *p;
	p = malloc(sizeof(int));

	if(p == NULL){
		printf("Sem memoria\n");
		return 1;

	}
	*p = 42;
	printf("%d\n", *p);
	free(p);
	return 0;
}
