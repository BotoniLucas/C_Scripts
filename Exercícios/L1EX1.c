/*Lucas Botoni de Souza
01) Leia um número inteiro, verifique, e escreva se ele é par ou impar. Lembre-se que para um número 
ser par o resto da divisão do número por 2 deverá ser zero.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x;
      printf("digite um numero: \n");
      scanf("%d", &x);
      if (x%2==0)
{
      printf("o nunero e par \n");
}else 
{
      printf("o numero e impar \n");
}
      system("pause");
}            

