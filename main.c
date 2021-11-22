#include <stdio.h>
#include <stdlib.h>

int main()
{
     char cadena[50];
   int contM,contD,i,d,n;
   int minmayus,maxmayus;
   char palmas[50];
   char palmenos[50];
   minmayus=100;
   maxmayus=0;
   FILE *ap;
    int op;
    ap=fopen("masvocales.txt","a");
    if(ap!=NULL){

   printf("cuantas palabras deseas ingresar: ");
   scanf("%d",&d);
   n=0;
   while(n<d){
   printf("ingresa una palabra:  " );
   scanf("%s",&cadena);
   n++;
 contM=0;

   for(i=0;cadena[i]!='\0';i++){

  if (cadena[i]=='A' || cadena[i]=='E'|| cadena[i]=='I'|| cadena[i]=='O'|| cadena[i]=='U' )
   contM++;

   }
   if(minmayus>contM){
   minmayus=contM;
   strcpy(palmenos,cadena);
   }

   if(maxmayus<contM){
    maxmayus=contM;
    strcpy(palmas,cadena);
   }
   }

      fprintf(ap,"\n\nEl maximo de vocales mayusculas: (%d)  y la palabra es:   (%s) \n",maxmayus,palmas);
  fprintf(ap,"El minimo de mayusculas: (%d) y la palabra es:    (%s) \n",minmayus,palmenos);
   printf("\n\nEl maximo de vocales mayusculas: (%d)  y la palabra es:   (%s) \n",maxmayus,palmas);
  printf("El minimo de mayusculas: (%d) y la palabra es:    (%s) \n",minmayus,palmenos);
   }
else
        printf("Error en la apertura del archivo.");
    fclose(ap);
    return 0;
}
