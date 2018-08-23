#include <stdio.h>
#include <math.h>
int main ()
{
double X,rad,Y1,Y2,Y3,PI=3.1415;
	printf("Introduzca un numero: \n");
	scanf("%lf",&X);
	rad=(X*PI)/180;
	Y1=exp(-1*X);
	printf("Y=exp(x): %lf \n",&Y1);
	Y2=(cos(X*rad))+(2*tan(X*rad/2));
	printf("Y=cos(x)+2tan(x/2): %lf \n",&Y2);
	Y3=log(X)+(3*X*X);
	printf("Y=log(x)+3x^2: %lf \n",Y3);
return 0;
}
