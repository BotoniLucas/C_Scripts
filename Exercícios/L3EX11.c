/* Lucas Botoni de Souza
11) Um elemento Aij de uma matriz é dito ponto de sela da matriz A se, e somente se, Aij for ao mesmo 
tempo o menor elemento da linha i e o maior elemento da coluna j. Faça um programa que carregue 
uma matriz de ordem 5 x 7, verifique se a matriz possui ponto de sela e, se possuir, mostre seu 
valor e sua localização na matriz*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[5][7], i, j, maior, menor, k;
      for(i=0;i<5;i++){
          for(j=0;j<7;j++){
                           printf("a[%d][%d] \n", i, j);
                           scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<5;i++){
                       printf("\n");
          for(j=0;j<7;j++){
                           printf("[%d]", a[i][j]);
          }
      }
      for(i=0;i<5;i++){
          for(j=0;j<7;j++){
                           maior=a[i][j];
                           menor=a[i][j];
                           for(k=0;k<5;k++){
                                            if(a[k][j]>maior){
                                                              maior=a[k][j];
                                            }
                           }
                           for(k=0;k<7;k++){
                                            if(a[i][k]<menor){
                                                              menor=a[i][k];
                                            }
                           }
                           if(a[i][j]==maior && a[i][j]==menor){
                                                                printf("\n a[%d][%d] = %d eh o ponto de sela da matriz \n", i, j, a[i][j]);
                           }
          }
      }
      system("pause");
}
                           
