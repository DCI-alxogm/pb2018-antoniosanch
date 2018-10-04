#include <stdio.h>
int main()
{
	float temp_c,temp_k;
	float inicial,final,delta;
	int n,i,op=1;
	while(op==1){
	printf("indique una temperatura inicial a convertir a kelvin \n");
	scanf("%f",&inicial);
	printf("indique una temperatura final  \n");
	scanf("%f",&final);
	printf("indique el numero de iteraciones  \n");
	scanf("%i",&n);
	delta=(final-inicial)/n;
	temp_c=inicial;
		for(i=0;i<=n;i++){
		temp_k=temp_c+273.15;
		printf("%f %f \n",temp_c,temp_k);
		temp_c=temp_c+delta;  //  temp_c+=delta; 
}
	printf("¿Desea volver a ejecutar el programa?, presione 1 para si, cualquier oto numero para no\n");
	scanf("%i",&op);
}
return 0;
}
