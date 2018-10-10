//funcion con argumentos de entrada pero no de salida
#include <stdio.h>
void cuadrado(float x);
int main(){
float a;
printf("Introduce un numero\n");
scanf("%f\n",&a);
cuadrado(a);

}
void cuadrado(float x){
float x2;
x2=x*x;
printf("%f",x2);
}

