#include <stdio.h>
int main (void)
{
float C,F,K;
printf("Introduzca su temperatura en celsius a convertir: \n");
scanf("%f",&C);
F=(C*1.8)+32;
K=C+273.15;
printf("c=%f \t",C);
printf("f=%f \t",F);
printf("k=%f \n",K);
return 0;
}
