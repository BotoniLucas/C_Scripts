/* Lucas Botoni de Souza
2) Crie uma fun��o que receba um n�mero inteiro por
par�metro e retorne 1 se esse n�mero � n�mero
primo, caso contr�rio, retornar 0. Apresentar dentro
do main() o resultado da fun��o.*/

#include<stdio.h>
#include<stdlib.h>

int primo(int n) {
    int x;
    if(n%2!=0 && n%3!=0 && n!=1 || n==2 || n==3){
               x=1;
    }
    else{
               x=0;
    }  
    return x;
}           

main()
{
   int result, valor, x;
   printf("digite um numero inteiro positivo \n");
   scanf("%d", &valor);
   result = primo(valor);
   printf("%d \n", result);          
   system("pause");
}
