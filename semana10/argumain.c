#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
printf("El nombre del programa que estas compilando es: %s\n", argv[0]);	
float xo,yo,zo,es;
int n,i;
char *nombre_archivo;
FILE *fp;
if (argc==7){
			
		xo = atof(argv[1]);
		yo = atof(argv[2]);
		zo = atof(argv[3]);
		es = atof(argv[4]);
		n = atoi(argv[5]);
		nombre_archivo = argv[6];
		printf("Nombre del archivo que se abrirá: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+");	
			for (i=0; i<n; i++){
				fprintf(fp, "%f \t %f \t %f\n", xo, yo, zo);
				xo = xo + es;	
				yo = yo + es;	
				zo = zo + es;		
				}
		fclose(fp);
		}
		else if(argc<7){
			printf("Se requieren más argumentos para el programa\n");
		}
		else {
		printf("Indique los x,y,z iniciales, el espaciado, repeticiones y el nombre\n");
		}


	return 0;
}
