/* Lucas Botoni de Souza
1) Desenvolver um programa que efetue a leitura de um valor num�rico inteiro e apresente-o caso
este valor seja divis�vel por 4 e 5. N�o sendo divis�vel por 4 e 5, o programa dever� apresentar
a mensagem "N�o � divis�vel por 4 e 5".*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a;
      printf("digite um numero inteiro: \n");
      scanf("%d", &a);
      if (a%4==0 && a%5==0)
{
      printf("%d e divisivel por 4 e 5 \n", a);       
}      
      else
{
      printf("%d nao e divisivel por 4 e 5 \n", a);
}            
      system("pause");
}
