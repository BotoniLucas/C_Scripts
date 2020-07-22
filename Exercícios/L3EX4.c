/*Lucas Botoni de Souza
4) Construir dois vetores A e B de inteiros com capacidade de 5 elementos. Construir um terceiro vetor 
C que será a potência de A com B, ou seja, a base do elemento estará em A enquanto a expoente 
estará no mesmo índice de B. (ex: C[i] = A[i]^B[i])*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[5], b[5], c[5], i, j, pot;
      for(i=0;i<5;i++){
                        printf("digite o %d termo do vetor a: \n", i);
                        scanf("%d", &a[i]);
      }
      for(i=0;i<5;i++){
                       printf("digite o %d termo do vetor b: \n", i);
                       scanf("%d", &b[i]); 
      }
      for(i=0;i<5;i++){
                       pot=a[i];
                       for(j=1;j<b[i];j++){
                       a[i]=pot*a[i];
                       }
                       c[i]=a[i];
      }
      for(i=0;i<5;i++){
                       printf("c[%d]=%d \n", i, c[i]);
      }
      system("pause");
}
                        
                        
                        
      
