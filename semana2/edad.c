/*Creado el 12 de agosto de 2018 por Jesus Antonio sanchez garcia*/
#include <stdio.h>
int main()
{
	int edad,edad_2;
	char nom;
	
	printf("Hola,este es un programa que te dice  tu edad en 2028\n");
	printf("¿Cual es tu nombre?\n");
	scanf("%c",&nom);
	printf("introduce tu edad: \n",edad);
	scanf("%i\n",&edad);
	edad_2=edad+10;
	printf("%c tu edad es: %i \n"nom,edad_2);
	return 0;
}
