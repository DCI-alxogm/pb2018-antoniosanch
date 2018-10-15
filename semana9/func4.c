//creado por jesus antonio sanchez garcia
#include <stdio.h>
float cuadrado();
int main(){
	float c;
	c=cuadrado();
	printf("el resutado es: %f\n",c);
	return 0;
}

float cuadrado(){
float xx,x;
printf("introduce un numero:\n");
scanf("%f",&x);
xx=x*x;
return xx;
}

