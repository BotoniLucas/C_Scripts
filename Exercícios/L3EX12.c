/*Lucas Botoni de Souza
12) Crie um programa que preencha uma matriz 15 x 5 com números inteiros, calcule e mostre quais 
elementos da matriz se repetem e quantas vezes cada um se repete.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int a[15][5], i, j, n=0, x=0, c, b , m[15][2], y=0, cont=0;
      for(i=0;i<15;i++){
          for(j=0;j<5;j++){
                           printf("a[%d][%d] \n", i, j);
                           scanf("%d", &a[i][j]);
          }
      }
      for(i=0;i<15;i++){
          for(j=0;j<5;j++){
              for(c=0;c<15;c++){
                  for(b=0;b<5;b++){
                                   if(a[i][j]==a[c][b] && a[i][j]!=0){
                                   x++;
                  }
              }
          }
          if(x!=0){
                   if(y==0){
                            m[y][0]=a[i][j];
                            m[y][1]=x;
                            y++;
                   }
                   else{        
                        for(c=0;c<y;c++){
                                         if(m[c][0]==a[i][j]){
                                         cont++;
                                         }
                        }
                        if(cont==0){
                                    m[y][0]=a[i][j];
                                    m[y][1]=x;
                                    y++;
                        }
                        cont=0;                 
                   }
           }
           x=0;
        }
      }
      for(i=0;i<y;i++){
                       printf("\n");
           for(j=0;j<2;j++){
                            printf(" [%d] \t",m[i][j]);
         }
      }
      system("pause");
}
