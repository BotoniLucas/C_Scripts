/* Lucas Botoni de Souza
8) Ler uma matriz A com 10 linhas e 10 colunas. Apresentar o somatório dos elementos pares situados 
na diagonal principal da matriz.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10][10], i, j, soma=0;
      for(i=0;i<10;i++){
          for(j=0;j<10;j++){
                            printf("a[%d][%d] \n", i, j);
                            scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<10;i++){
          for(j=0;j<10;j++){
                            if(i==j){
                                     if(a[i][j]%2==0){
                                                soma+=a[i][j];
                                     }
                            }
          }
      }
      printf("a soma eh %d \n", soma);
      system("pause");
}
                                                
