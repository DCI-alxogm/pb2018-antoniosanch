#include <stdio.h>
int main ()
{
	int i,fac=1,n,op=1;
	while(op==1){
	
	printf("introduzca el numero el cual quiere calcular el factorial \n");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		fac*=i;
		//fac=fac*i;
	}
		printf("\nEl factorial del numero %i es %i\n",n,fac );
		fac=1;
printf("Desea volver a correr el programa? presione 1 para si y cualquiero otro numero para no\n");
scanf("%i",&op);
}
return 0;
} 
