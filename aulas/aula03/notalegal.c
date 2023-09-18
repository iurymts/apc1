#include <stdio.h> // funções scanf e printf

int main() {

  char item1[] = "Caderno";
  int quantidade = 1;
  float valor = 10.0f;

  printf("--------------------------------\n");
  printf("          NOTA LEGAL            \n");
  printf("--------------------------------\n");
  printf("Item           Qtd Valor        \n");
  printf("%-14.14s %03i %10.2f\n" , item1 , quantidade, valor);


  char item2[] = "Lapis";
  quantidade = 5;
  valor = 5.0f;

  printf("%-14.14s %03i %10.2f\n" , item2 , quantidade, valor);

   char item3[] = "Borracha";
   quantidade = 5;
   valor = 5.0f;
  printf("%-14.14s %03i %10.2f\n" , item3 , quantidade, valor);

  printf("--------------------------------\n");
  printf("Total           65,00           \n");
  printf("--------------------------------\n");

  return 0;
}