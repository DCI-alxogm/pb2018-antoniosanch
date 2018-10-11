#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	FILE *lect;
	int M,i;//las lineas se guardan en M
	float *num,pro,d,suma=0;
	char ar[30];
	lect=fopen("promedio.txt","r");
	while(fgets(ar,30,lect)!=NULL){
		M++;
	}
	fclose(lect);//se cierra archivo para saber cuantas lineas tiene
	lect=fopen("promedio.txt","r");
	num=(float*)malloc(M*sizeof(float));
	for(i=0;i<M;i++){
		fscanf(lect,"%f",num+i);
		suma+=*(num+i);
	}
	fclose(lect);
	pro=suma/M;
	d=sqrt(suma);//calculo de la desviacion estandar
	free(num);
	printf("El promedio es: %f\n",pro);
	printf("La desviacion estandar es: %f ",d);
	return 0;
}
