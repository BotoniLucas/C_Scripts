/* Lucas Botoni de Souza
13) Faça um programa que mostre o fatorial dos números de 5 a 15. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int x=1, y, z, w=1;
      for(y=5;y<=15;y++){
          w=y;
          for(w;w>0;w--){
              z=x*w;
              x=z;
          }
          x=1;
          printf("%d \t", z);                          
      }
      system("pause");
}
