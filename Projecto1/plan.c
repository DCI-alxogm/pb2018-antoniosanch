//Creado por Jesus Antonio Sanchez Garcia
#include <stdio.h>
#include <math.h>
int main() {
	FILE *fp;
	FILE *RE;//archivo donde estaran los resultados
	fp=fopen("mascor.txt","r");//abrimos el archivo de lectura
	int N;//numero de planetas a analizar
	char plan[20];//datos , es tipo char para crear cada archivo de cada planeta
	double i,G,xo,yo,zo,vx,vy,vz,T,H,r, maspla,masestre;
	G=4.0*pow(3.1415,2);//calculando 
	fscanf(fp,"%i",&N);//se lee el numero de planetas
	for(i=0.0;i<N;i++){
		fscanf(fp,"%s",&plan);
		fscanf(fp, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vx, &vy, &vz);
		//se lee la masa de la estrella, tiempo de evolucion, paso de tiempo y masa del planeta
		fscanf(fp, "%lf %lf %lf %lf", &masestre, &T, &H, &maspla);
		vx*=365;//se hace transforman las velocidades a unidades astronomicas por ano
		vy*=365;//x *= y	x = x * y
		vz*=365;
	RE=fopen(plan,"w");//se abre el archivo de resultados
	for(i=0.0;i<=T+H;i+=H){
        fprintf(RE, "\n Tiempo=%lf, %lf, %lf, %lf, %lf , %lf , %lf",i, vx, vy, vz, xo, yo, zo);
      	//calculo de las posiciones 
        xo+=vx*H;// Asignacion compuesta con algun otro operador x+=y
        yo+=vy*H;
        zo+=vz*H;
        r=sqrt(xo*xo+yo*yo+zo*zo);//radio
      	//calculo de las nuevas velocidades
       	vx-=H*((G*masestre*xo)/pow(r,3));// x -= y 	x = x - y  asignacion de sustrtaccion
        vy-=H*((G*masestre*yo)/pow(r,3));
        vz-=H*((G*masestre*zo)/pow(r,3));
        	}
	fclose(RE);
}//cerrar archivos
	fclose(fp);
return 0;
}

