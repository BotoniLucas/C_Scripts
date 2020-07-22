/* Lucas Botoni de Souza
8) Faça um programa que leia o número de termos e um valor positivo para X, 
calcule e mostre o valor da série a seguir... */

#include<stdio.h>
#include<stdio.h>

main()
{
    int x, n, i, j, p, im, sinal=-1;
    float fat, exp, soma=0;
    printf("digite o numero de termos \n");
    scanf("%d", &n);
    printf("digite x \n");
    scanf("%d", &x);
    for(i=1;i<=n;i++){
                      p=2*i;
                      im=2*i+1;
                      sinal=sinal*-1;
                      exp=1;
                      for(j=1;j<=p;j++){
                                        exp=exp*x;
                      }
                      
                      fat=1;
                      for(j=1;j<=im;j++){
                                         fat=fat*j;
                                         }                 
                      soma=soma+((exp/fat)*sinal);
    }
    printf("a soma eh %.10f \n", soma);
    system("pause");    
}                                                       

                      
                      
