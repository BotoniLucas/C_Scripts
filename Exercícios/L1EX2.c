/*Lucas Botoni de Souza
02) Leia um número inteiro, verifique, e escreva se este número é maior,menor ou igual a zero.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x;
      printf("digite o numero: \n");
      scanf("%d", &x);
      if (x==0)
{     
      printf("o numero e zero \n");
      }
      else if (x>0)
{
      printf("o numero e maior que zero \n");
      }
      else
{
      printf("o numero e menor que zero \n");
}
      system("pause");
}                         
