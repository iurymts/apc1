//Faça um programa que C que calcula os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considerar ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.


  #include <stdio.h>

  int main () {
      float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * 0.17f;
  float valor_cofins = preco_inicial * 0.076f;
  float valor_pispasep = preco_inicial * 0.0165f;

     float preco_final = (1 + 0.17f + 0.076f + 0.0165f) * preco_inicial;

printf("o preco inicial é %f\n", preco_inicial);
printf("o valor icms é %f\n", valor_icms);
printf("o valor cofins é %f\n", valor_cofins);
printf("o valor pis_pasep é %f\n", valor_pispasep);
printf("o preco final é %f\n", preco_final);

  return 0;
}
  