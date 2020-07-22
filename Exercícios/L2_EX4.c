/* Lucas Botoni de Souza
 4) Desenvolver um algoritmo para apresentar os números maiores que zero e menores que 100 
que sejam múltiplos de 3, 4 e 7. */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x=0, s;
      for(s=1;s<=100; s++){            
          if (s%3==0 && s%4==0 && s%7==0){
              printf("%d \n", s);
              }else{}
                    
      }
      system("pause");
}      
                                            
                      
