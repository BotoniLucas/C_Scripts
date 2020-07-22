/*Lucas Botoni de Souza
1) Ler um vetor A do tipo inteiro com 10 elementos. Construir um vetor B do tipo inteiro, sendo que 
cada elemento do vetor B seja o fatorial do elemento correspondente do vetor A. Apresentar o vetor 
resultante B.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10], b[10], i, j;
      for(i=0;i<10;i++){
                        printf("digite o %d termo do vetor a: \n", i);
                        scanf("%d", &a[i]);
      }
      for(i=0;i<10;i++){
                        b[i]=1;
                        for(j=1;j<=a[i];j++){
                                             b[i]*=j;
                        }
      }
      for(i=0;i<10;i++){
                        printf("b[%d]=%d \n", i, b[i]);
      }
      system("pause");
}
      
                        
                        
