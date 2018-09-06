
#include <stdio.h>
#include <math.h>
int main()
{
int i,j,a,b,primo,digit;
float raiz;
printf("indique un intervalo (dos numeros para calcular los numeros primos que hay en el\n ");
scanf("%i %i",&a,&b);
while((a-b)>100){
	printf("El intervalo es mayor que 100, indique otro\n");
	scanf("%i %i",&a,&b);
}	
for(i=a;i<=b;i++){
	primo=1;
	raiz=sqrt(i);
	for(j=2;j<=raiz;j++){
		if(i%j==0){
		primo=0;
		}
	}
	if(primo==1){
	printf("%i \n",a);
	digit++;
	if(digit%20==0){
		printf("\n");
	}
	}
	}
	return 0;		
}

