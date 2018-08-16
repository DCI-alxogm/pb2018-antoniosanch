#include <stdio.h>
int main()
{
//Declaración de las variables	
	int a,b,c,d,e;
	printf("Este programa realiza 4 operaciones \n");
	printf("introduce 4 numeros enteros: \n");
	scanf("%i %i %i %i",&a,&b,&c,&d);
	//Las primeras 3 operaciones son identicas
	//Por el orden de las operaciones primero realiza los (), despues el *, luego / y al final la suma
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %i",e);
	e=((a+b)*c)/d;
	printf("\nEl resultado de e=((a+b)*c)/d es: %i",e);
	e=(a+b)*c/d;
	printf("\nEl resultado de e=(a+b)*c/d es: %i",e);
	e=a+(b*c)/d;
	printf("\n el resultado de e=a+(b*c)/d es: %i",e);
	return 0;
}
