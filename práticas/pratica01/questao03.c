/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main () {

  int PI = 3.1416;
  int r = 1;

  float perimetro = 2 * PI * r;

  printf("O perimetro é %f cm\n" , perimetro);
  
  return 0;
  }