/*Pedro Henrique Azevedo de Amorim - RA:120019 - MC504 - turma A*/

#include <stdio.h>
#include <unistd.h>

/*
-Separar todos os diferentes diretorios (Usar o parametro argv[])
-Testar se o comando se encontra em algum deles
-Colocar um printf no final indicando que ocorreu erro
*/

int main(int argc, char* argv[]){
  char *arg[] = {"/usr/bin/whoami", "--version", 0};
  execv("/usr/bin/whoami", arg);
  printf("Erro\n");
  return 0;
}
