#include <stdio.h>
#include <math.h>
int main ()
{
	int num;
	float x,y,z,ro,the,phi,o1,p1,x2,y2,z2,C,F,K;
//
	printf("Digite cual programa quiere correr. 1 es para tempretarura y 2 para coordenadas:\n");
	scanf("%i",&num);
	switch(num){
		case 1:printf("Introduzca su temperatura en celsius a convertir: \n");
			scanf("%f",&C);
			F=(C*1.8)+32;
			K=C+273.15;
			printf("c=%f \t",C);
			printf("f=%f \t",F);
			printf("k=%f \n",K);
			return 0;  
			break;
		case 2:
		printf(" Introduce un valor para x: \n");
		scanf("%f",&x);
		printf(" Introduce un valor para y: \n");
		scanf("%f",&y);
		printf(" Introduce un valor para z: \n");
		scanf("%f",&z);
		ro=sqrt((x*x)+(y*y)+(z*z));
		the=acos(z/ro);
		phi=atan(y/x);
		o1=the*57.296;
		p1=phi*57.296;
		printf("\nEl valor para Ro es: %f",ro);
		printf("\nEl valor para theta es:%f",o1);
		printf("\nEl valor para fi es:%f",p1);

		x2=ro*sin(o1)*cos(p1);
		y2=ro*sin(o1)*sin(p1);
		z2=ro*cos(o1);
		printf("\n El valor de x es: %f",x2);
		printf("\n El valor de y es: %f",y2);
		printf("\n El valor de z es: %f",z2);
		return 0;  
		break;
		default: printf("El numero que indico es no valido");}
return 0;
}
