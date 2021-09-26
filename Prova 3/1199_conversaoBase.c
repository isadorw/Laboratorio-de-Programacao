#include <stdio.h>
#include <string.h>
#include <stdlib.h> // funcao atoi

int main() {

    int a; // inteiro
    char str[100]; // leitura dos numeors
    long resp; // resposta 

   while(scanf("%s", str) != EOF){ // enqto leitura str for != de end of file faça

    // base decimal para hexadecimal

    // se nao for hexadecimal realiza o if abaixo
    if (str[1] != 'x') { 
      // conversao string para inteiro
      a = atoi(str);

      // se a for menor q 0 para o programa
      if (a < 0){ 
    	  return 0;
      }
    
      printf("0x%X\n", a); // %X converte a = 44 para um numero hexadecimal

    // base hexadecimal para base decimal
    } else {
      resp = strtol(str, 0, 16); // funcao converte hexadecimal para base decimal
      printf("%ld\n", resp);
    }
    }

    return 0;
}