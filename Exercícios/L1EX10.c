/*Lucas Botoni de Souza 
10) Faça um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu peso 
ideal, utilizando as seguintes fórmulas:
- Para homens: (72.7 * altura) - 58
- Para mulheres: (62.1 * altura) - 44.7 
Dica: Para ler o sexo, leia apenas um char, sendo F para feminino e M para masculino. */

#include<stdio.h>
#include<stdlib.h>

main()
{
      char sexo;
      float h, pim, pif;
      printf("digite sua altura: \n");
      scanf("%f", &h);
      printf("digite m se for homem e f se for mulher \n");
      scanf("%s", &sexo);
      if (sexo=='m')
{
      pim = (72.7*h)-58;
      printf("o seu peso ideal e: %.2f \n", pim);
}
      else if (sexo=='f')
{
      pif = (62.1*h)-44.7;
      printf("o seu peso ideal e: %.2f \n", pif);
}
      system("pause");
}
      
