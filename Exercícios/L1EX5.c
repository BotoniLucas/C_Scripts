/*Lucas Botoni de Souza
05) Faça um programa que leia o salário de um funcionário e o código do seu cargo. Calcule e escreva o 
valor de aumento em R$ seguindo a tabela abaixo.
Codigo | Cargo | Aumento
-------------------------------
1 | Secretaria | 5%
2 | Caixa | 10%
3 | Gerente | 10%
4 | Diretor | 15% */

#include<stdio.h>
#include<stdlib.h>

main()
{
      float s, c, a;
      printf("informe seu salario: \n");
      scanf("%f", &s);
      printf("informe o codigo do seu cargo: \n");
      scanf("%f", &c);
      if (c==1)
{
      a = (s*.05);
      printf("o aumento foi de: %.1f reais \n", a);
}
      else if (c==2 || c==3)
{
      a = (s*.1);
      printf("o aumento foi de: %.1f reais \n", a);            
}
      else if (c==4)
{
      a = (s*.15);
      printf("o aumento foi de: %.1f reais \n", a);
}
      system("pause");
}                             
      
