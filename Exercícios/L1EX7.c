/*Lucas Botoni de Souza
07) Faça um programa que receba a altura e o peso de uma pessoa. Verifique qual a sua classificação 
de acordo com a tabela.
Altura         |Até 60 kg| Entre 60 e 90 | Acima de 90
----------------------------------------------------------
Menor que 1.20 | A       | D             | G
de 1.20 a 1.70 | B       | E             | H
Maior que 1.70 | C       | F             | I     */

#include<stdio.h>
#include<stdlib.h>

main()
{
      float h, p;
      printf("informe seu peso: \n");
      scanf("%f", &p);
      printf("informe sua altura: \n");
      scanf("%f", &h);
      if (h<1.20 && p<=60)
{
      printf("sua classificacao e: a \n");
}
      else if (h<1.20 && p>60 && p<=90)
{      
      printf("sua classificacao e: d \n");
}
      else if (h<1.20 && p>90) 
{           
      printf("sua classificacao e: g \n");    
}
      else if (h>=1.20 && h<=1.70 && p<=60)
{      
      printf("sua classificacao e: b \n");    
}
      else if (h>=1.20 && h<=1.70 && p>60 && p<=90)
{      
      printf("sua classificacao e: e \n");    
}
      else if (h>=1.20 && h<=1.70 && p>90)
{
      printf("sua classificacao e: h \n");    
}
      else if (h>1.70 && p<=60)
{      
      printf("sua classificacao e: c \n");      
}
      else if (h>1.70 && p>60 && p<=90)
{      
      printf("sua classificacao e: f \n");      
}
      else
{
      printf("sua classificacao e: i \n"); 
}
      system("pause");
}                             
                  
      
