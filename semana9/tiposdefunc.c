//creado por Jesus Antonio Sanchez Garcia
#include <stdio.h>
void sineysa();
int guarda();
int comprob(int num);
void sumauno(int num);

int main(){//funcion prncipal
	int x,num;
sineysa();
printf("Indique un numero:\n");//guardara el numero en el argumento de la funcion guarda
num=guarda();
x=comprob(num);
if(x==0){
	//printf("Su numero es par\n");
	sumauno(num);
}
else{
	printf("\nSu numero es impar");
}	
return 0;
}


//4 tipos de funciones
//funcion sin entrada ni salida
void sineysa(){
	printf("Este programa te pide una numero y te dice si es par o impar, si el numero es par le suma 1 \n");
}

//funcion con salida pero sin entrada
int guarda(){
	int num;
	scanf("%d",&num);
	return num;
}

//funcion con entrada y salida
int comprob(int num){
	if(num%2==0){
		return 0;
	}
	else{
		return 1;
	}
}

//funcion con entrada argumentos de entrada pero sin salida
void sumauno(int num){
	int x2;
	x2=num+1;
	printf("\nEl numero que usted ingreso es par y sumandole 1 da como resultado: %i",x2);
}
