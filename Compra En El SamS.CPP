/*                                                                */
#include<conio.h>
#include<stdio.h>
char nom[10], art[20];
int unid;
float prec, des, total, pag;

main ()
{


   printf(" Compra En El SamS \n\n");
   printf(" Dame tu nombre: "); gets(nom);
   printf(" Articulo: "); scanf("%d", &art); fflush(stdin);
   printf(" Dame el precio: "); scanf("%f", &prec);
   printf(" Cuantas unidades son? "); scanf("%d", &unid);
   total = prec * unid;

	printf("\n Total de la compra: ", total);
   if(total > 1000)
   {
     des = total * .10;
   }
   else
   {
   	des = 0; D::
   }
   printf("\n\n Tu Descuento Es: %.2f", des);
   pag = total - des;
   printf("\n\n Total a pagar: %.2f", pag);
   printf("\n\n Autor: IRVIN ADRIAN");


   getch();
  }