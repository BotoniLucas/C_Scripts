/* Lucas Botoni de Souza
3) Construir um vetor A de inteiros com capacidade de 10 elementos. Modificar o vetor A para que 
todos os elementos fiquem ordenados de forma decrescente.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10], aux, i, j, pos, maior;
      for(i=0;i<10;i++){
                        printf("digite o %d termo do vetor a: \n", i);
                        scanf("%d", &a[i]);
      }
      for(i=0;i<10;i++){
                        maior=a[i];
                        for(j=i;j<10;j++){
                                          if(a[j]>=maior){
                                                          maior=a[j];
                                                          pos=j;
                                          }
                        }
                        aux=a[i];
                        a[i]=a[pos];
                        a[pos]=aux;         
      }
      for(i=0;i<10;i++){
                        printf("a[%d]=%d \n",i, a[i]);
      }
      system("pause");
}
                        
                        
                        
      
