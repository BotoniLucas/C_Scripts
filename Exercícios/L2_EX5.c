/* Lucas Botoni de Souza
 5) Seja a seguinte série:
1, 4, 9, 16, 25, 36, ...
Escreva um algoritmo em C que gere esta série até o N-ésimo termo. Este N-ésimo termo é 
digitado pelo usuário. */

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
                                            
                      
