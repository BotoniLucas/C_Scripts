/* Lucas Botoni de Souza
Elaborar um programa para criar o menu de opções para cálculo de áreas utilizando o comando switch*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

main()
{
      int w;
      float x, y, z, b;
      printf("--------------------------AREAS------------------------------\n\n");
      printf("MENU---------------------------------------------------------\n\n");
      printf(" 1-Triangulo \n 2-Trapezio \n 3-Circulo \n 4-Losango \n\n");
      printf("Digite a opcao desejada \n");
      scanf("%d", &w);
      switch (w){
             case 1:
                  printf("Digite o valor da base do triangulo \n");
                  scanf("%f", &x);
                  printf("Digite o valor da altura do triangulo \n");
                  scanf("%f", &y);
                  z = (x*y)/2;
                  printf("A area da triangulo eh %.1f \n", z);
                  break;
             case 2:
                  printf("Digite o valor da base menor do trapezio \n");
                  scanf("%f", &x);
                  printf("Digite o valor da base maior do trapezio \n");
                  scanf("%f", &y);
                  printf("Digite o valor da altura do trapezio \n");
                  scanf("%f", &z);
                  b = (x+y)*z/2;
                  printf("A area do trapezio eh %.1f \n", b);
                  break;
             case 3:
                  printf("Digite o valor do raio da circunferencia \n");
                  scanf("%f", &x);
                  z = PI*(x*x);
                  printf("A area da circunferencia eh %.1f \n", z);
                  break;
             case 4:
                  printf("Digite o valor das duas diagonais do losango \n");
                  scanf("%f", &x);     
                  scanf("%f", y);
                  z = (x*y)/2;
                  printf("A area do losango eh %.1f \n", z);
                  break;
             default:
                  printf("Opcao invalida \n");
                  break;
}
       system("pause");
}                                            
                       
                       
