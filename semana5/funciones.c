#include <stdio.h>
#include <math.h>
int main()
{
float x,inicial,final,expon,sen,cs,raiz,ln;
int i;
printf("Este programa evalua las funciones exponencial, logaritmo, sen, cos y raiz cuadrada\n");
printf("Indique un numero inicial: \n");
scanf("%f",&inicial);
printf("Indique un numero final: \n");
scanf("%f",&final);
if(inicial<final){
printf("Indique el numero de iteraciones: \n");
scanf("%i",&i);
x=inicial;
	for(x=0;x<=i;x++){
		expon=exp(x);
		sen=sin(x);
		cs=cos(x);
		raiz=sqrt(x);
		ln=log(x);
		printf("exp=%f \t seno=%f \t cos=%f \t raiz=%f \t ln=%f \n",expon,sen,cs,raiz,ln);	
}
}else{printf("su intervalo no es correcto\n");}
return 0;
}
