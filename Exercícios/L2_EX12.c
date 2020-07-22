/* Lucas Botoni de Souza
12) Faça um programa que mostre as tabuadas dos números de 1 a 10. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int x=0, y=0;
      for(y=1;y<=10;y++){
          for(x=1;x<=10;x++){               
          printf("%d \t", x*y);
          }
      }
      system("pause");
}                     
