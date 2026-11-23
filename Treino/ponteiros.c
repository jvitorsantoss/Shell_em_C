#include <stdio.h>

int main(void){
	

	int x = 5;
	int y = 99;
	int *p = &x;
	int **pp = &p;
	

	printf("%p %p %p\n", (void*)&x, (void *)&p, (void *)&pp);
	return 0;
	}
