/* Lucas Botoni de Souza
2) Faça um programa que receba três números e mostre o maior.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      float a, b, c;
      printf("digite tres numeros: \n");
      scanf("%f", &a);
      scanf("%f", &b);
      scanf("%f", &c);
      if (a>b && a>c)
{
      printf("o maior numero e: %.1f \n", a);       
}      
      else if (b>a && b>c)
{
      printf("o maior numero e: %.1f \n", b);
}            
      else
{
      printf("o maior numero e: %.1f \n", c);
}           
      system("pause");
}
