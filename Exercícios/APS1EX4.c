/* Lucas Botoni de Souza
4) Escrever  um  algoritmo  fa�a um  reajuste  a  um funcion�rio  de  acordo
   com  os seguintes crit�rios:
   a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;
   b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;
   c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;
   d) 10% para os demais funcion�rios.
 
   Leia o nome do funcion�rio, seu  sal�rio e o valor do sal�rio m�nimo. 
   Calcule o seu novo sal�rio reajustado. 
   Escrever o nome do funcion�rio, o reajuste e seu novo sal�rio. 
   Calcule quanto � empresa vai aumentar sua folha de pagamento. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main()
{
      float s, sm, r, ns;
      char nome[40];
      printf("digite seu nome \n");
      fflush(stdin);
      gets(nome);
      printf("digite seu salario \n");
      scanf("%f", &s);
      printf("digite o salario minimo \n");
      scanf("%f", &sm);
      if (s<3*sm){
          ns=s+(s*0.5);
            r=(s*0.5);
              printf("%s seu reajuste foi de 50 por cento \n", nome);
                printf("seu novo salario e de R$ %.2f \n", ns);
                  printf("a empresa aumentara a folha de pagamento em R$ %.2f \n", r);
}
      else if (s>=3*sm && s<=10*sm){
          ns=s+(s*0.2);
            r=(s*0.2);
              printf("%s seu reajuste foi de 20 por cento \n", nome);
                printf("seu novo salario e de R$ %.2f \n", ns);
                  printf("a empresa aumentara a folha de pagamento em R$ %.2f \n", r);
}
      else if (s>10*sm){
          ns=s+(s*0.15);
            r=(s*0.115);
              printf("%s seu reajuste foi de 15 por cento \n", nome);
                printf("seu novo salario e de R$ %.2f \n", ns);
                  printf("a empresa aumentara a folha de pagamento em R$ %.2f \n", r);
}     
      else{
        ns=s+(s*0.1);
          r=(s*0.1);
            printf("%s seu reajuste foi de 10 por cento \n", nome);
              printf("seu novo salario e de R$ %.2f \n", ns);
                printf("a empresa aumentara a folha de pagamento em R$ %.2f \n", r);
          
}
      system("pause");
}                    
      
