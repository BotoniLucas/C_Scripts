/* Lucas Botoni de Souza
7) Ler dois vetores A e B de inteiros com 7 elementos cada. Construir uma matriz C com 7 linhas e 
duas colunas, em que a primeira coluna deverá ser formada pelos elementos do vetor A e a 
segunda coluna deverá ser formada pelos elementos do vetor B. Apresentar a matriz C resultante.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[7], b[7], c[7][2], i, j;
      for(i=0;i<7;i++){
                       printf("a[%d] \n", i);
                       scanf("%d", &a[i]);
      }
      for(i=0;i<7;i++){
                       printf("b[%d] \n", i);
                       scanf("%d", &b[i]);
      }
      for(i=0;i<7;i++){
          for(j=0;j<2;j++){
                           if(j==1){
                                    c[i][j]=a[i];
                           }
                           else{
                                    c[i][j]=b[i];
                           }
          }
      }
      for(i=0;i<7;i++){
          for(j=0;j<2;j++){
                           printf("c[%d][%d]=%d \n", i, j, c[i][j]);
          }
      }
      system("pause");
}
      
