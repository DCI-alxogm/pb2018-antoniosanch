//creado por Jesus Antonio Sanchez Garcia
#include <stdio.h>
int main(){
//declaracion de una variable entera
	int a;
	printf("introduce un numero \n");
	scanf("%i",&a);
//dividir el numero agregado a "a" y si su cociente es 0 entonces imprimir en pantalla que es par (if), y si su cociente es otro numero distinto de 0 entonces es impar (else).
	if(a%2==0){
		printf("a=%i es par\n",a);
        }	else{
		printf("a=%i es impar\n",a);
	}
return 0;
}
