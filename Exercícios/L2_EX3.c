/* Lucas Botoni de Souza
 3) Escreva um algoritmo em C que imprima todos os números ímpares do intervalo fechado de 
1 a 100. */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int x=0, s;
      for(s=1;s<=100; s++){
          x=s%2;            
          if (x!=0){
              printf("%d \n", s);
              }else{}
                    
      }
      system("pause");
}      
                                            
                      
