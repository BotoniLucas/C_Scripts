/* Lucas Botoni de Souza
14) Elaborar um programa que efetue a leitura de 10 valores numéricos e 
apresente no final o total do somatório e a média dos valores lidos.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      float x=0, y=0, z, w;
      for(y=1;y<=10;y++){
          printf("digite um numero \n");
          scanf("%f", &x);
          z+=x;
          w=z/10;
      }
          printf("A soma eh %.1f \n", z);
          printf("A media eh %.1f \n", w);
      system("pause");
}          
          
                           
