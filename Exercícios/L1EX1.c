/*Lucas Botoni de Souza
01) Leia um n�mero inteiro, verifique, e escreva se ele � par ou impar. Lembre-se que para um n�mero 
ser par o resto da divis�o do n�mero por 2 dever� ser zero.*/

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

