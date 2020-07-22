/*Lucas Botoni de Souza
6) Construir duas matrizes A e B com 5 linhas e 3 colunas. Construir uma matriz C de mesma 
dimensão, que é formada pela soma dos elementos da matriz A com os elementos da matriz B.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[5][3], b[5][3], c[5][3], i, j;
      for(i=0;i<5;i++){
          for(j=0;j<3;j++){
                           printf("a[%d][%d] \n", i, j);
                           scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<5;i++){
          for(j=0;j<3;j++){
                           printf("b[%d][%d] \n", i, j);
                           scanf("%d", &b[i][j]);
          }
      }
      for(i=0;i<5;i++){
          for(j=0;j<3;j++){
                           c[i][j]=a[i][j]+b[i][j];
          }
      }
      for(i=0;i<5;i++){
          for(j=0;j<3;j++){
                           printf("c[%d][%d]=%d \n", i, j, c[i][j]);
          }
      }
      system("pause");
}
      
