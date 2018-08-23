//Creado por jesus antonio sanchez garcia 23/08/18
#include <stdio.h>
int main(){
//Declaramos 2 variables enteras, una para guardar el numero que teclee el usuario y otra para guardar la suma 
	int a,a2;
	printf("Este programa suma 1 al numero que ingreses solo si es par\n");
	printf("introduce un numero\n");
	scanf("%i",&a);
//Si el numero es par entonces le suma 1 e imprime en la pantalla, si no imprime que el numero es impar
	if(a%2==0){
		a2=a+1;
		printf("%i\n",a2);
	}
	else{
		printf("Su numero es impar");	
	}
return 0;
}
