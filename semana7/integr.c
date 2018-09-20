#include <stdio.h>
#include <math.h>
int main (){
	//declaracion de variables
	FILE *fp;
	float A,b,B,h,xi,xf,f,v;
	int i,p,n;
	A=0;
	printf("indique la potencia: \n ");
	scanf("%d",&p);//p//xi//xf//
	if(p<=0)
	{
	printf("indique otro valor para p ya que su numero es negativo ");
	return 1;
	}	printf("indique un x inicial : \n ");
	scanf("%f",&xi);
	printf("indique un x mayor: \n ");
	scanf("%f",&xf);
	if(xi>xf){
		printf("Su x inicial es mas grande que la final");
		return 1;
	}
	printf("indique el numero de iteraciones\n");
	scanf("%d",&n);
	h=(xf-xi)/n;
	fp=fopen("Resultado.txt","w");
	for(i=1;i<=n;i++){
		f=xi;
	b=pow(f,p);
	B=pow(f+(i*h),p);
	A=A+((b+B)*h)/2;
	v=h*i;
	fprintf(fp,"%d.-\t X=%f\t F(X)=%f ^ %i\t I(X)=%f\t  \n",i,v,B,p,A);//A//i//
	b=B;
	}
	fclose(fp);	
	
	return 0;
}
