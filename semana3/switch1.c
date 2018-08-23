#include <stdio.h>
int main ()
{
	int numero;
//pediremos un numero entre 1 y 3
	printf("Digite un numero entre 1-3\n");
	scanf("%i",&numero);
	switch(numero){
		case 1: printf("Es el numero 1\n"); break;
		case 2: printf("Es el numero 2\n"); break;
		case 3: printf("Es el numero 3\n"); break;
		default: printf("El numero que indico es incorrecto");
}
//en este programa habra 3 casos y el default, teclear de 1 a 3 e imprimir el numero tecleado o el default nos marca un error de indicar incorrectamente lo que se pide
return 0;
}
