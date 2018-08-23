#include <stdio.h>
#include <math.h>
int main()
{
float x,y,r,PI=3.1415,a1,a2,a3,a4;
//Este programa convertira coordenadas cartesianas a polares
printf("Introduce un numero para x:\n");
scanf("%f",&x);
printf("Introduce un numero para y:\n");
scanf("%f",&y);
printf("La coordenada que elegiste es: (%f,%f)\n",x,y);
r=sqrt(pow(x,2)+pow(y,2));
a1=atan(y/x)*(180/PI);
a2=(atan(y/x)*(180/PI))+180;
a3=(atan(y/x)*(180/PI))+180;
a4=(atan(y/x)*(180/PI))+180;
if(x>0 && y>0){
	printf("La coordenada polar se encuentra en el cuadrante 1 y (r,theta) es: (%f,%f) \n",r,a1);}
else if(x<0 && y>0){
	printf("La coordenada polar se encuentra en el cuadrante 2 y (r,theta) es:(%f,%f) \n",r,a2);}
else if(x<0 && y<0){
	printf("La coordenada polar se encuentra en el cuadrante 3 y (r,theta) es:(%f,%f) \n",r,a3);}
else if(x>0 && y<0){
	printf("La coordenada polar se encuentra en el cuadrante 4 y (r,theta) es:(%f,%f) \n",r,a4);}
return 0;
}
