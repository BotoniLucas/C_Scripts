/* Lucas Botoni de Souza
9) Escreva um algoritmo que lê uma matriz M com 6 linhas e 6 colunas. A seguir, troque os elementos 
da primeira coluna com os elementos da segunda coluna, os da terceira coluna com a quarta coluna 
e os elementos da quinta coluna com os elementos da sexta coluna.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int m[6][6], i, j;
      for(i=0;i<6;i++){
          for(j=0;j<6;j++){
                           printf("m[%d][%d] \n", i, j);
                           scanf("%d", &m[i][j]);
          }
      }
      for(i=0;i<6;i++){
          for(j=0;j<6;j++){
                           if(j%2==0){
                                      printf("%d \n", m[i][j+1]);
                           }
                           if(j%2!=0){
                                      printf("%d \n", m[i][j-1]);
                           }
          }
      }
      system("pause");
}
