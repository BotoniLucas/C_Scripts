/* Lucas Botoni de Souza
 5) Seja a seguinte s�rie:
1, 4, 9, 16, 25, 36, ...
Escreva um algoritmo em C que gere esta s�rie at� o N-�simo termo. Este N-�simo termo � 
digitado pelo usu�rio. */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x=0, s, n;
      printf("digite um numero: \n");
      scanf("%d", &n);
      for(s=1;s<=n; s++){            
          x=s*s;
          printf("%d \n", x);          
      }
      system("pause");
}      
                                            
                      
