/* Lucas Botoni de Souza
11) Fa�a um programa que receba dez n�meros inteiros e mostre a quantidade de n�meros primos dentre os n�meros que foram digitados*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
      int a=0, b, c=0;
      printf("Digite 10 numeros: \n");
      for (b=1; b<=10; b++){
          scanf("%d", &a);
          if(a%a==0 && a%2!=0 && a%3!=0 || a==2 || a==3){
             c++;
          }else{}
      }
      printf("%d numeros sao primos \n", c);        
      system("pause");
}                                 
      
