/*Lucas Botoni de Souza
5) Construir uma matriz alunos que armazene as 4 notas de 10 alunos. A dimensão desta matriz será 
de 10x4 (10 linhas e 4 colunas). Apresentar a média de cada aluno.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[10][4], m[10], i, j, s;
      for(i=0;i<10;i++){
          for(j=0;j<4;j++){
                           printf("aluno %d, nota %d \n", i, j);
                           scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<10;i++){
                        s=0;
                        for(j=0;j<4;j++){
                                         s+=a[i][j];
      }
      m[i]=s/4;
      }
      for(i=0;i<10;i++){
                        printf("m[%d]=%d \n", i, m[i]);
      }
      system("pause");
}
      
                           
                           
                                         
                                         
