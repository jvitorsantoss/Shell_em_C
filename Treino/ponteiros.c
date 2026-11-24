#include <stdio.h>

int main(void){
	

	int x = 5;
	int y = 99;
	int *p = &x;
	int **pp = &p;
	

	printf("%p %p %p\n", (void*)&x, (void *)&p, (void *)&pp);

	printf("Valor de x: %d \n", x);

	printf("Valor de p: %p\n" , (void*)p);

	/*
	 * POR QUE AQUI E *p (SEM CAST)?
	 *
	 * O * "segue a seta": vai ate a caixa para onde o p aponta
	 * e pega o que tem LA DENTRO.
	 *
	 *     p  ------>  x [ 5 ]
	 *
	 * O p aponta para o x, entao *p e o conteudo do x: o 5.
	 * O 5 e um NUMERO (int), entao:
	 *   - usa %d
	 *   - NAO usa (void*), porque o (void*) e so para endereco
	 */
	printf(" %d\n", *p);

	/*
	 * POR QUE AQUI E (void*)pp (SEM *)?
	 *
	 * Aqui eu NAO sigo seta nenhuma: quero o que esta guardado
	 * DENTRO da propria caixa pp.
	 *
	 *     pp [ endereco do p ]
	 *
	 * Dentro do pp tem um ENDERECO (o endereco do p), entao:
	 *   - usa %p
	 *   - usa (void*), porque o %p exige endereco generico
	 *
	 * RESUMO:
	 *   nome sozinho (p, pp) -> o que esta DENTRO da caixa
	 *   *nome        (*p)    -> segue a seta e pega o que esta LA
	 *   o resultado e numero?   -> %d, sem cast
	 *   o resultado e endereco? -> %p, com (void*)
	 */
	printf("%p\n", (void*)pp);

	printf("%p\n", (void*)*pp);

	printf("%d\n", **pp);

	**pp = 42;

	printf("%d\n", x);

	*pp = &y;

	printf("%d\n", *p);
		
	return 0;

}
