/*Lucas Botoni de Souza
06) Faça um programa que leia três números inteiros que representam os lados de um triângulo. 
Verifique e imprima qual é o tipo do triângulo. 
Três lados iguais - Equilatero
Dois lados iguais - Isosceles
Nenhum lado igual - Escaleno */

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a, b, c;
      printf("informe a medida do primeiro lado: \n");
      scanf("%d", &a);
      printf("informe a medida do segundo lado: \n");
      scanf("%d", &b);
      printf("informe a medida do terceiro lado: \n");
      scanf("%d", &c);
      if (a==b && b==c)
{
      printf("o triangulo e equilatero \n");
}
      else if (a==b && a!=c || a==c && a!=b || b==c && a!=b)
{
      printf("o triangulo e isosceles \n");
}
      else
{
      printf("o triangulo e escaleno \n");
}
      system("pause");
}             
            
                  
