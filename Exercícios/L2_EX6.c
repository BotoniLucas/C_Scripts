/* Lucas Botoni de Souza
 6) Seja a seguinte s�rie:
1, 4, 4, 2, 5, 5, 3, 6, 6, 4, 7, 7, ...
Escreva um algoritmo em C que seja capaz de gerar os N termos dessa s�rie. Esse n�mero 
N deve ser lido do teclado. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int x, s, n, y, w=0;
      printf("digite o numero de termos: \n");
      scanf("%d", &n);
      for(s=1;s<=n; s++){
                    if ( (s-1)%3==0){
                         y = s - (2*w);
                         w++;
                         printf("%d \n", y);
                    }else{
                          x=y+3;
                          printf("%d \n", x);
                          }
      }                    
      system("pause");                          
}                                    
                      
