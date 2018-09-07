//programa creado por jesus antonio sanchez garcia 6/09/18
#include <stdio.h>
#include <math.h>
int main()
{
	int num;//declaracion de variables
	int deci,resi,i,r,t,s;
	printf("Este programa cambia de numeros binarios a base decimal y visceversa\n");
	printf("Teclee 1 para convertir de binarios a decimales y 2 para visceversa\n");
	scanf("%i",&num); 
	s=1;
	r=0;
	t=0;
	switch (num){
		int bin,d,p,c,b,g;
		case 1:
			printf("introduzca un numero binario: \n");//pedir el numero binario con bin,se coloca de arriba a abajo 
			bin=0;
			while((bin==0) || (bin==1)){//solo se debe colocar ceros y unos, si se pone otro numero la funcion while no se cumple	
				scanf("%i",&bin);
				if((bin==0)||(bin==1)){ //estea condicional if else solo sirve para eliminar el ultimo numero que agregue diferente de 0 y 1
				
					s=1;
				}
				else{
					s=0;
				}
				r=r+bin*s*pow(2,t);//operacion de conversion, 2 a la t, t es la potencia que se eleva el 2 y bin el numero que tecleo el ususrio 
				t++;//t va aumentando dependiendo del numero de unos y ceros qe el usuario teclee para convertir
			}
			 printf("El numero en decimal es: %i",r);//imprime el valor de r
			 break;
		case 2://caso 2 de decimales a binarios
			printf("introduce un numero decimal, el resultado se leera de derecha a izquierda: \n");
			scanf("%i",&deci);
			//resi=deci%2;
			//printf("%d",resi);
			while(deci!=0){//si deci es diferente de 0
			resi=deci%2;//resi va a tomar el valor del residuo de la division de resi entre 2
			deci=deci/2;
			if(resi==0){//si resi es igual a 0 entonces imprime 0 y si no imprime 1
				printf("0");
			}
			else{
				printf("1");
			}
		}
		
		break;
		default: printf("numero no valido");
	}
	
	return 0;
}
