#include <stdio.h>
int main(int argc, char *argv[]){
	printf("El programa que estas ejecutando es: %s\n",argv[0]);
	char *datos;
	FILE *fp;
	if(argc==2){
	datos=argv[1];
		printf("El nombre del archivo a abrir es: %s\n",datos);
		fp=fopen(datos,"W+");//aqui se pondra todo lo que se quiere hacer...
		fclose(fp);
}
	else if(argc>2){
		printf("Mas argumentos de los necesarios\n");
}
	else{
	printf("Se requiere de al menos 1 argumento\n");
}
return 0;
}
