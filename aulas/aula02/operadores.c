#include <stdio.h>

/*
  Conversão de tipos no C
  - implícita: feita pelo compilador e sem perda de dados
  - explícita: feita pelo programador e com perda de dados
 */

int main()
{
    char caractere = 127;
    int inteiro = caractere;   // conversão implícita
    float flutuante = inteiro; // conversão implícita
    double duplo = flutuante;  // conversão implícita

    printf("Conversão implícita\n");
    printf("o char %d convertido em int é %d\n", caractere, inteiro);
    printf("o int %d convertido em float é %f\n", inteiro, flutuante);
    printf("o float %f convertido em double é %f\n\n", flutuante, duplo);

    duplo = 270.987654;
    flutuante = (float)duplo;  // conversão explícita
    inteiro = (int)flutuante;  // conversão explícita
    caractere = (char)inteiro; // conversão explícita

    printf("Conversão explícita\n");
    printf("o double %f convertido em float é %f\n", duplo, flutuante);
    printf("o float %f convertido em int é %d\n", flutuante, inteiro);
    printf("o int %d convertido em char é %d\n", inteiro, caractere);

    return 0;
}

// operadores relacionais

int menor_que = 1 < 0; // 0 - falso; 1 - verdadeiro 
int menor_igual = 1 <= 0;
int maior_que = 1 > 0;
int maior_igual = 1 >= 0;
int igual_a = 1 == 0;
int diferente = 1 != 0;

// operadores logicos 

int e = 0 < 1 && 1 < 10; // 0 < 1 < 10; 0 && 7 = 0
int ou = 0 < 1 || 1 > 10; // 0 < 1, 1 > 10; ? = 1
int nao = !(0 < 1); // !0 = 1; !1 =0;

return 0;

}