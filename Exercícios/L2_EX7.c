/* Lucas Botoni de Souza
 7) A s�rie de Fibonacci � formada pela seq��ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...N. Escreva 
um algoritmo em C que gere N termos da s�rie. Esse n�mero N deve ser lido do teclado. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int x, y=0, z=1, s, w;
      printf("digite o numero de termos: \n");
      scanf("%d", &x);
      printf("%d \n", z);
      for(s=1;s<x; s++){
                   w = y+z;
                   y=z;
                   z=w;
                   printf("%d \n", w);
      }             
      system("pause");                          
}                                    
                      
