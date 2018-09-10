#include <stdio.h>
int main ()
{
int N=10,i;
float numeros[N];
for(i=0;i<N;i++){
	numeros[i]=0;
}
for(i=0;i<N;i++){
	scanf("%f \n",&numeros[i]);//imprime la variable flotante del arreglo
}
for(i=0;i<N;i++){
	printf("%f\n",numeros[i]);
}

return 0;
}
