/* Lucas Botoni de Souza
1) Escreva um algoritmo em C que imprima todos os números múltiplos de 5, no intervalo 
fechado de 1 a 100. */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x=0, s;
      for(s=1;s<=100; s++){
          x=s%5;            
          if (x==0){
              printf("%d \n", s);
              }else{}
                    
      }
      system("pause");
}      
                                            
                      
