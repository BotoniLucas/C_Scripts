/*Lucas Botoni de Souza
08) Faça um programa que leia 3 números em ordem crescente. Leia um quarto numero. Imprima os 
quatro números em ordem crescente.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
      int w, x, y, z;
      printf("informe tres numeros: \n");
      scanf("%d", &w);
      scanf("%d", &x);
      scanf("%d", &y);
      printf("informe outro numero \n");
      scanf("%d", &z);
      if (w>=x && x>=z && z>=y)
{
      printf("%d \t %d \t %d \t %d\n", y, z, x, w);
}
      else if (w>=y && y>=x && x>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, x, y, w);
}
      else if (x>=w && w>=y && y>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, y, w, x);
}
      else if (x>=y && y>=w && w>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, w, y, x);
}
      else if (y>=w && w>=x && x>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, x, w, y);
}
      else if (y>=x && x>=w && w>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, w, x, y);
}
      else if (w>=x && x>=y && z>=w)
{
      printf("%d \t %d \t %d \t %d\n", y, x, w, z);
}
      else if (w>=z && z>=y && y>=x)
{
      printf("%d \t %d \t %d \t %d\n", x, y, z, w);
}
      else if (x>=w && w>=z && z>=y)
{
      printf("%d \t %d \t %d \t %d\n", y, z, w, x);
}
      else if (x>=z && z>=y && y>=w)
{
      printf("%d \t %d \t %d \t %d\n", w, y, z, x);
}
      else if (y>=w && w>=z && z>=x)
{
      printf("%d \t %d \t %d \t %d\n", x, z, w, y);
}
      else if (y>=x && x>=z && z>=w)
{
      printf("%d \t %d \t %d \t %d\n", w, z, x, y);
}
      else if (w>=x && x>=y && y>=z)
{
      printf("%d \t %d \t %d \t %d\n", z, y, x, w);
}
      else if (w>=y && y>=z && z>=x)
{
      printf("%d \t %d \t %d \t %d\n", x, z, y, w);
}
      else if (x>=z && z>=w && w>=y)
{
      printf("%d \t %d \t %d \t %d\n", y, w, z, x);
}
      else if (x>=y && y>=z && z>=w)
{
      printf("%d \t %d \t %d \t %d\n", w, z, y, x);
}
      else if (y>=z && z>=w && w>=x)
{
      printf("%d \t %d \t %d \t %d\n", x, w, z, y);
}
      else if (y>=z && z>=x && x>=w)
{
      printf("%d \t %d \t %d \t %d\n", w, x, z, y);
}
      else if (w>=z && z>=x && x>=y)
{
      printf("%d \t %d \t %d \t %d\n", y, x, z, w);
}
      else if (w>=y && y>=x && z>=w)
{
      printf("%d \t %d \t %d \t %d\n", x, y, w, z);
}
      else if (x>=w && w>=y && z>=x)
{
      printf("%d \t %d \t %d \t %d\n", y, w, x, z);
}
      else if (x>=y && y>=w && z>=x)
{
      printf("%d \t %d \t %d \t %d\n", w, y, x, z);
}
      else if (y>=w && w>=x && z>=y)
{
      printf("%d \t %d \t %d \t %d\n", x, w, y, z);
}
      else if (y>=x && x>=w && z>=y)
{
      printf("%d \t %d \t %d \t %d\n", w, x, y, z);
}
      system("pause");
}
      
