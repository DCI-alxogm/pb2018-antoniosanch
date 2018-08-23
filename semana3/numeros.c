#include <stdio.h>
int main(){
//Declarar dos variables para evaluarlas en las condicionales if & else
	int numero1,numero2;
	printf("Introduzca dos numeros enteros: \n");
	scanf("%i %i",&numero1,&numero2);
//si se indica dos numeros iguales imprimira el primer if, en cambio si el primero es mayor al segundo imprimira el primer else if y si sucede lo contrario imprimira el segundo else if
	if(numero1==numero2){
		printf("Resultado: %i=%i",numero1,numero2);
	}
	else if(numero1>numero2){
		printf("Resultado= %i>%i",numero1,numero2);
	}
	else if(numero1<numero2){
		printf("Resultado: %i<%i",numero1,numero2);
	}
return 0;
}
