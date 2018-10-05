#include <stdio.h>
int main()
{
int var=20;//declaracion de la variables
int *ip;
ip=&var; //asigna la direccion de la variable var al apuntador ip*
printf("La direccion de la variable var es:%x\n",(int)&var);
printf("Direccion guardada en el apuntador ip:%x\n",(int)&var);
	printf("El valor de *ip: %d\n",*ip);
	return 0;
}
