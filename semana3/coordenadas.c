//programa creado por Jesus Antonio Sanchez Garcia 
#include <stdio.h>
#include <math.h>
int main ()
{
	float x,y,z,ro,the,phi,o1,p1,x2,y2,z2;
	printf(" Introduce un valor para x: \n");
	scanf("%f",&x);
	printf(" Introduce un valor para y: \n");
	scanf("%f",&y);
	printf(" Introduce un valor para z: \n");
	scanf("%f",&z);
//se agregaran coordenadas de transformacion para coordenadas cartesianas a esfericas
	ro=sqrt((x*x)+(y*y)+(z*z));
	the=acos(z/ro);
	phi=atan(y/x);
	o1=the*57.296;
	p1=phi*57.296;
	printf("\nEl valor para Ro es: %f",ro);
	printf("\nEl valor para theta es:%f",o1);
	printf("\nEl valor para fi es:%f",p1);
//ahora de esfericas a cartesianas
//agregar ecuaciones de transformacion para coordenadas esfericas
	x2=ro*sin(o1)*cos(p1);
	y2=ro*sin(o1)*sin(p1);
	z2=ro*cos(o1);
	printf("\n El valor de x es: %f",x2);
	printf("\n El valor de y es: %f",y2);
	printf("\n El valor de z es: %f",z2);
	
	return 0;
}    
