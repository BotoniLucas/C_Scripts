/*Lucas Botoni de Souza
04) Faça um programa que leia dois números inteiros e os escreva em ordem crescente.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x, y;
      printf("digite o primeiro numero: \n");
      scanf("%d", &x);
      printf("digite o segundo numero: \n");
      scanf("%d", &y);
      if (x<y)
{
      printf("%d \t %d \n",x, y);   
}
      else
{
      printf("%d \t %d \n", y, x);
}
      system("pause");
}                             
