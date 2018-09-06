#include <stdio.h>
#include <math.h>
int main ()
{
float exp_; 
int n=10,j;
//declaracion de variables (contadores en enteros)
//colocar el bucle, inicializar el contador en 0 y limitarlo hasta 10 iteraciones (n)
	for(j=0;j<n;j++){
// dentro del bucle añadir a nuestra variable el contador e imprimir
		exp_=exp(j);
		printf("%i \t %f\n",j,exp_);
//si la condicion j<n ya no se cumple, el bucle termina i por siguiente el programa tambien
}
return 0;
}
