/* Lucas Botoni de Souza
Elabore um programa para exibir um menu onde o
usuário possa escolher uma das seguintes funções
para efetuar um cálculo: raiz quadrada, quadrado
de um número e o módulo de um número.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int x; 
      float y, z;
      printf("-------------------------------------------------------------\n");
      printf("                           MENU                              \n");
      printf("-------------------------------------------------------------\n\n");
      printf(" 1-Raiz quadrada de um numero \n 2-Quadrado de um numero \n 3-Modulo de um numero \n\n");
      printf("Digite a opcao desejada \n\n");
      scanf("%d", &x);
      switch (x){
             case 1:
                  printf("Digite o numero: \n");
                  scanf("%f", &y);
                  z = sqrt(y);
                  printf("A raiz quadrada de %.1f eh %.1f \n", y, z);
                  break;
             case 2:
                  printf("Digite o numero: \n");
                  scanf("%f", &y);
                  z = y*y;
                  printf("O quadrado de %.1f eh %.1f \n", y, z);
                  break;
             case 3:
                  printf("Digite o numero: \n");
                  scanf("%f", &y);
                  z =  abs(y);
                  printf("O modulo de %.1f eh %.1f \n", y, z);
                  break;
             default:
                  printf("Opcao invalida \n");
                  break;
}      
       system("pause");
}                                
                      
                  
                       
      
