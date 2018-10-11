#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *ar;
int M=0,p,i,pos;
char ax[20];
float ma=-10000,*numero,*es;
//se debe abrir el archivo para leer el num de lineas
ar=fopen("num_maximo.txt","r");
while(fgets(ax,20,ar)!=NULL){
	M++;
}
fclose(ar);
ar=fopen("num_maximo.txt","r");
//archivo donde se lee cada num
numero=(float*)malloc (M*sizeof(float));
for(i=0;i<M;i++){
	fscanf(ar,"%f",numero+i);
	if(*(numero+i)>ma){
		ma=*(numero+i);
		pos=i+1;
		es=numero;
	}
}
fclose(ar);
printf("EL numero mayor es: %f\n",ma);
printf("Su posicion es: %x",es);
free(numero);
return 0;
}
