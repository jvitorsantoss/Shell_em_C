#include <stdio.h>

int main(void){

	char s[] = "cd /home/kali -p";
	char *c = s;
	int i, barras, tracos;
	
	barras = 0;
	tracos = 0;
	for(i = 0;*(c + i) != '\0'; i++){

		if(*(c + i) == '/'){
			barras++;
			}

		else if(*(c + i) == '-'){
			tracos++;
		}
	}

	printf(" Total de tracos %d e total ed barras eh de %d\n", tracos, barras);

	return 0;
}
vim.pack.add({
  "https://github.com/sphamba/smear-cursor.nvim",  -- cursor com rastro
})

require("smear_cursor").setup({
  smear_between_neighbor_lines = true,  -- rastro ate subindo/descendo 1 linha
})
