/* Lucas Botoni de Souza
10) Fa�a um programa que receba um n�mero inteiro maior que 1, 
verifique se o n�mero fornecido � primo ou n�o e mostre mensagem de n�mero primo ou de n�mero n�o primo. 
Um n�mero � primo quando � divis�vel apenas por 1 e por ele mesmo.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int z;
      for(z=0;z<=1;z){
         printf("Digite um numero \n");
         scanf("%d", &z);
      }
         if(z%z==0 && z%2!=0 && z%3!=0 || z==2 || z==3){
            printf("O numero %d eh primo \n", z);
         }else{
               printf("O numero %d nao eh primo \n", z);
         }            
      system("pause");
}
                              
