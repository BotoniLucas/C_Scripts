/*Lucas Botoni de Souza
2) Construir um vetor A de inteiros com capacidade de 10 elementos. Construir um vetor B de inteiros 
com base nos elementos de A, seguindo a seguinte lei de formação: todo elemento do vetor A que 
for ímpar deverá ser multiplicado por 2; caso contrário, copiar o elemento do vetor A da forma como 
ele está.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10], b[10], i;
      for(i=0;i<10;i++){
                        printf("digite o %d termo do vetor a: \n", i);
                        scanf("%d", &a[i]);
      }
      for(i=0;i<10;i++){
                        if(a[i]%2!=0){
                                        b[i]=2*a[i];
                        }else{
                              b[i]=a[i];
                        }
      }
      for(i=0;i<10;i++){
                        printf("b[%d]=%d \n", i, b[i]);
      }
      system("pause");
}
      
      
