/* Lucas Botoni de Souza
9) Faça um programa que leia o número de termos, determine e mostre os valores de acordo 
com a série a seguir...*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a=2, b=7, c=3, n, i;
      printf("Digite o numero de termos: \n");
      scanf("%d", &n);
      for(i=1;i<=n;i++){
          if((i+3)%3==1){
             printf("%d \n", a);
             a*=2;
          }else if((i+3)%3==2){
                   printf("%d \n", b);
                   b*=3;
          }else{
                printf("%d \n", c);   
                c*=4;
          }
      }                                          
      system("pause");
}   
