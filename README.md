# Shell em C

Um shell parecido com o bash, escrito do zero em C (ANSI C89 + POSIX), como projeto de estudo.

## Como uso IA neste projeto

Uso IA (Claude) **como professor, não como programador**. Todo o código deste repositório foi escrito por mim.

A IA:
- explica conceitos (ponteiros, `char **`, `malloc`/`realloc`/`free`, syscalls POSIX) com exemplos pequenos e diferentes da solução;
- revisa o meu código apontando problemas e fazendo perguntas, **sem reescrever nem corrigir por mim**;
- dá dicas progressivas quando eu travo, nunca a resposta pronta;
- confere se eu entendi antes de avançar de etapa;
- conecta cada assunto com cibersegurança (ataques e defesas).

As regras completas que passei para a IA estão em [PROFESSOR.md](PROFESSOR.md).

## Padrão do projeto

- C89 compilado com:
  ```
  gcc -std=c89 -pedantic -Wall -Wextra -Werror -g -fsanitize=address,undefined
  ```
- "Modo difícil": sem `system()`, `popen()`, `glob()`, `wordexp()` e, no início, sem `readline`.
- Valgrind limpo (zero vazamentos) e nenhum descritor de arquivo esquecido aberto.
- Ambiente: Kali Linux.

## Roteiro

| Etapa | O que construir | Status |
|---|---|---|
| 1 | Tokenizador com máquina de estados (aspas, escapes, operadores) | ⬜ |
| 2 | Loop do shell, `fork`/`execvp`/`waitpid`, `cd`, `exit`, `$?` | ⬜ |
| 3 | Redirecionamentos (`>`, `>>`, `<`, `2>&1`) com `open` e `dup2` | ⬜ |
| 4 | Pipes com N comandos | ⬜ |
| 5 | Parser com AST e precedência de `\|`, `&&`, `\|\|`, `;` e `( )` | ⬜ |
| 6 | Expansão de variáveis, `$(...)` e glob feito na mão | ⬜ |
| 7 | Sinais e controle de jobs (`jobs`, `fg`, `bg`, `tcsetpgrp`, `SIGCHLD`) | ⬜ |
| 8 | Heredoc, terminal em modo raw (termios), setas e histórico | ⬜ |
| 9 | Cores ANSI, prompt personalizado, destaque de sintaxe, autocompletar | ⬜ |
| 10 | Segurança do shell: fuzzing, injeção, sequestro de PATH, `LD_PRELOAD`, setuid | ⬜ |
