/*Lucas Botoni de Souza
09) Faca um programa que calcule o tempo em minutos de uma prova de corrida. Para isto leia as horas 
e minutos do início da prova, e a hora e minutos do fim da prova. */

#include<stdio.h>
#include<stdlib.h>

main()
{
       float hi, hf, mi, mf, h, m, r;
       printf("informe a hora do inicio da prova \n");
       scanf("%f",&hi);
       printf("informe os  minutos da hora de inicio da prova \n");
       scanf("%f",&mi);
       printf("Digite a hora de termino da prova \n");
       scanf("%f",&hf);
       printf("Digite os  minutos da hora de inicio da prova \n");
       scanf("%f",&mf);
      
       if(mi>mf)
{
       h=hf-hi-1;
       m=mf+60-mi;
       r=(60*h)+m;
       printf("a prova durou %.2f minutos \n",r);                      
}     
       else
{
       h=hf-hi;
       m=mf-mi;
       r=(60*h)+m;         
       printf("a prova durou %.2f minutos \n",r);   
}             
       system("pause"); 
}   

      
