/* Lucas Botoni de Souza
11) Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os números que foram digitados*/

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
      
