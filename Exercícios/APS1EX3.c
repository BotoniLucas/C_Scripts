/* Lucas Botoni de Souza
3) Efetuar a leitura de cinco números inteiros e identificar o maior e o menor valor.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a, b, c, d, e;
      printf("digite cinco numeros: \n");
      scanf("%d", &a);
      scanf("%d", &b);
      scanf("%d", &c);
      scanf("%d", &d);
      scanf("%d", &e);
      if ((a>=b) && (a>=c) && (a>=d) && (a>=e) && (b<=c) && (b<=d) && (b<=e))
{
      printf("o maior e %d e o menor e %d \n", a, b);
}
      else if ((a>=b) && (a>=c) && (a>=d) && (a>=e) && (c<=b) && (c<=d) && (c<=e))
{
      printf("o maior e %d e o menor e %d \n", a, c);
}
      else if ((a>=b) && (a>=c) && (a>=d) && (a>=e) && (d<=b) && (d<=c) && (d<=e))
{
      printf("o maior e %d e o menor e %d \n", a, d);
}
      else if ((a>=b) && (a>=c) && (a>=d) && (a>=e) && (e<=b) && (e<=d) && (e<=c))
{
      printf("o maior e %d e o menor e %d \n", a, e);
}
           else if ((b>=a) && (b>=c) && (b>=d) && (b>=e)&& (a<=d) && (a<=c) && (a<=e))
{
      printf("o maior e %d e o menor e %d \n", b, a);
}
           else if ((b>=a) && (b>=c) && (b>=d) && (b>=e)&& (c<=d) && (c<=a) && (c<=e))
{
      printf("o maior e %d e o menor e %d \n", b, c);
}
           else if ((b>=a) && (b>=c) && (b>=d) && (b>=e)&& (d<=c) && (d<=a) && (d<=e))
{
      printf("o maior e %d e o menor e %d \n", b, d);
}
           else if ((b>=a) && (b>=c) && (b>=d) && (b>=e)&& (e<=d) && (e<=a) && (e<=c))
{
      printf("o maior e %d e o menor e %d \n", b, e);
}
                 else if ((c>=a) && (c>=b) && (c>=d) && (c>=e) && (a<=b) && (a<=d) && (a<=e))
{
      printf("o maior e %d e o menor e %d \n", c, a);
}
                 else if ((c>=a) && (c>=b) && (c>=d) && (c>=e) && (b<=a) && (b<=d) && (b<=e))
{
      printf("o maior e %d e o menor e %d \n", c, b);
}
                 else if ((c>=a) && (c>=b) && (c>=d) && (c>=e) && (d<=b) && (d<=a) && (d<=e))
{
      printf("o maior e %d e o menor e %d \n", c, d);
}
                 else if ((c>=a) && (c>=b) && (c>=d) && (c>=e) && (e<=b) && (e<=d) && (e<=a))
{
      printf("o maior e %d e o menor e %d \n", c, e);
}                      
                       else if ((d>=a) && (d>=c) && (d>=b) && (d>=e) && (a<=b) && (a<=c) && (a<=e))
{
      printf("o maior e %d e o menor e %d \n", d, a);
}
                       else if ((d>=a) && (d>=c) && (d>=b) && (d>=e) && (b<=a) && (b<=c) && (b<=e))
{
      printf("o maior e %d e o menor e %d \n", d, b);
}
                       else if ((d>=a) && (d>=c) && (d>=b) && (d>=e) && (c<=b) && (c<=a) && (c<=e))
{
      printf("o maior e %d e o menor e %d \n", d, c);
}
                       else if ((d>=a) && (d>=c) && (d>=b) && (d>=e) && (e<=b) && (e<=c) && (e<=a))
{
      printf("o maior e %d e o menor e %d \n", d, e);
}           
                             else if ((e>=a) && (e>=c) && (e>=d) && (e>=b) && (a<=b) && (a<=c) && (a<=d))
{
      printf("o maior e %d e o menor e %d \n", e, a);
}   
                             else if ((e>=a) && (e>=c) && (e>=d) && (e>=b) && (b<=a) && (b<=c) && (b<=d))
{
      printf("o maior e %d e o menor e %d \n", e, b);
}
                             else if ((e>=a) && (e>=c) && (e>=d) && (e>=b) && (c<=b) && (c<=a) && (c<=d))
{
      printf("o maior e %d e o menor e %d \n", e, c);
}
                             else if ((e>=a) && (e>=c) && (e>=d) && (e>=b) && (d<=b) && (d<=c) && (d<=a))
{
      printf("o maior e %d e o menor e %d \n", e, d);
}                                                                   
      system("pause");
}      
