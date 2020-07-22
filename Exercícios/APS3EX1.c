/* Lucas Botoni de Souza
1. Faça uma sub-rotina que receba como parâmetro
um valor inteiro e positivo N, indicando a
quantidade de termos de uma soma S, e retorna o
resultado de S, calculado pela fórmula:*/

#include<stdio.h>
#include<stdlib.h>

float calc(int n) {
      float s=0;
      int i;
      for(i=1;i<=n;i++){
                       s += ( ((float)i) * ((float)i) +1) / ( ((float)i) + 3);
      }
      return s;
}           

main()
{
   float r, v;
   printf("digite o numero de termos \n");
   scanf("%f", &v);
   r = calc(v);
   printf("a soma eh %.2f \n", r);          
   system("pause");
}
