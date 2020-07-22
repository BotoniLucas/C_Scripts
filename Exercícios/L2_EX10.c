/* Lucas Botoni de Souza
10) Faça um programa que receba um número inteiro maior que 1, 
verifique se o número fornecido é primo ou não e mostre mensagem de número primo ou de número não primo. 
Um número é primo quando é divisível apenas por 1 e por ele mesmo.*/

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
                              
