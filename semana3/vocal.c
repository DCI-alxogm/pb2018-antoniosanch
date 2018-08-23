//Creado por jesus antonio sanchez garcia
#include <stdio.h>
int main ()
{
//Declaramos tres variables, una tipo caracter y las otras dos enteras	
	char c;
	int es_vocalminuscula, es_vocalmayuscula;
	printf("Introduce una letra:\n");
	scanf("%c",&c);
//pedimos una letra y las variables enteras guardan la evaluacion de si son mayusculas o minusculas
	es_vocalminuscula =(c =='a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u');
	es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'); 
//el siguiente paso es solo colocar un if y else para dividir las vocales de las consonantes
	if(es_vocalmayuscula || es_vocalminuscula){
		printf("%c es una vocal\n",c);
	} else{
		printf("%c es consonante\n",c);
	}
	return 0;
}
