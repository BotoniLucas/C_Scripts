/* Lucas Botoni de Souza
10) Ler uma matriz A com 10 linhas e 7 colunas. Ao final apresentar o total de elementos pares e o total 
de elemento �mpares existentes dentro da matriz. Apresentar tamb�m o percentual de elementos 
pares e �mpares em rela��o ao total de elementos da matriz. Supondo a exist�ncia de 20 elementos 
pares e 50 �mpares, ter-se-ia 28,6% de elementos pares e 71,4% de elementos �mpares.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10][7], i, j, impar=0, par=0;
      float pp=0, pi=0;
      for(i=0;i<10;i++){
          for(j=0;j<7;j++){
                           printf("a[%d][%d] \n", i, j);
                           scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<10;i++){
          for(j=0;j<7;j++){
                           if(a[i][j]%2==0){
                                            par++;
                           }
                           if(a[i][j]%2!=0){
                                            impar++;
                           }
         }
      }
      pp=(par/70)*100;
      pi=(impar/70)*100;   
      printf("a matriz tem %d numero(s) par(es) e %d numero(s) impar(es) \n", par, impar);
      printf("porcentagem de pares = %.1f \t porcentagem de impares = %.1f \n\n", pp, pi);
      system("pause");
}                                      
