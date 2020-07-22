/*Lucas Botoni de Souza
03) Faça um programa que leia quatro notas de um aluno. Calcule e imprima sua média. Com sua média 
calculada escreva a situação do aluno de acordo com a tabela abaixo.
Média | Situação
------------------
>= 7.0 | Aprovado
< 7.0 | Reprovado*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      float n1, n2, n3, n4, m;
      printf("digite a primeira nota: \n");
      scanf("%f", &n1);
      printf("digite a segunda nota: \n");
      scanf("%f", &n2);
      printf("digite a terceira nota: \n");
      scanf("%f", &n3);
      printf("digite a quarta nota: \n");
      scanf("%f", &n4);
      m = (n1+n2+n3+n4)/4;
      if (m>=7)
{
      printf("a media foi: %.1f \t aprovado \n", m);
}
      else
{
      printf("a media foi: %.1f \t reprovado \n", m);
}
      system("pause");
}                  
