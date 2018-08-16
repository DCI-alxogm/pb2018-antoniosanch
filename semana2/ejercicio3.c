#include <stdio.h>
int main()
{
	double a,b,c,d,e;
	printf("Este programa realiza 4 operaciones \n");
	printf("introduce 4 numeros reales: \n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	//Los numeros reales son todos aquellos numeros que se pueden expresar en forma decimal finita o infinita, por lo tanto a diferencia de los enteros el usuario puede teclear numeros racionales o irracionales. 
	//Al agregar decimales no se perdera ningun digito como lo hacia si definiamos las variables como entero.
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %lf",e);
	e=((a+b)*c)/d;
	printf("\nEl resultado de e=((a+b)*c)/d es: %lf",e);
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %lf",e);
	e=a+(b*c)/d;
	printf("\n el resultado de e=a+(b*c)/d es: %lf",e);
	return 0;
}
