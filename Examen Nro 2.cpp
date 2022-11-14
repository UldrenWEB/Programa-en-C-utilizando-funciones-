/*Este programa contiene estructuras anidadas, funciones, arreglos y un menu que te ayudara a sumar o restar 
el dinero total de disponible para los traspasos

Este programa funciona para pedir los datos de un jugador de futbol saber sus datos y compararlo con 
el dinero total de las transferencias y si vale la pena segun su salario tambien*/

#include<stdio.h>
#include<stdlib.h>


struct skills{
	char pierna_habil[20];
	double velocidad;
	
}skill_info;

struct fut_player{ //Datos personales del jugador
	char name[20];
	char pais[20];
	struct skills skill_data;//Estructura anidada
	double salario;
}character[10];

int suma(double a, int b);
int resta(double c, int d);
int multiplicacion(float a, double f);

int main(){
	int j, y, opc;
	double x;
	
	printf("Ingrese la cantidad de jugadores que desea evaluar: ");
	scanf("%d", &j);
	   
	for(int i=0; i<j; i++){
		fflush(stdin);
		printf("\n<<<<<<<<<<Jugador[%i]>>>>>>>>>>\n", i+1);
		printf("Ingrese su nombre: ");
		gets(character[i].name);
		
		printf("Ingrese su nacionalidad: ");
		gets(character[i].pais);	
		
		printf("Ingrese pierna habil: ");
		gets(character[i].skill_data.pierna_habil);
		
		printf("Ingrese la velocidad punta del jugador: ");
		scanf("%lf", &character[i].skill_data.velocidad);
		
		printf("Ingrese el salario que tenia en su equipo anterior: ");
		scanf("%lf", &character[i].salario);
			
		printf("\n");
	}
	system("cls");
	printf("Ingrese la cantidad de dinero disponible para las transferencias de jugadores: ");
	scanf("%lf", &x);
	
	printf("\nSeleccione la opcion que desea realizar");
	printf("\n1.Agregar dinero a los fondos de transferencia del equipo");
	printf("\n2.Retirar dinero del total de tranferencias");
	scanf("%d",&opc);
	switch(opc){
		case 1: 
			printf("\nIngrese la cantidad que desea agregar: ");
			scanf("%d", &y);
			printf("El dinero total disponible para las transferencias es: %d\n", suma (x, y));
			break;
		case 2:
			printf("\nIngrese la cantidad a retirar del fondo para los traspasos: ");
			scanf("%d", &y);
			printf("El dinero total disponible para las tranferencias es: %d", resta(x, y));
			break;
		default:
			printf("\nIngreso un opcion erronea, no se realizara niguna transaccion");
			break;
				
		
	}
	
	for(int i=0; i<j; i++){
		printf("\n\n<<<<<Datos del judador #%i>>>>>", i+1);
		printf("\nNombre: %s",character[i].name);
		printf("\nNacionalidad: %s",character[i].pais);
		printf("\nPierna habil: %s", character[i].skill_data.pierna_habil);	
		printf("\nVelocidad punta: %.2lf km/h", character[i].skill_data.velocidad);
		printf("\nSalario anterior: %.2lf $\n\n", character[i].salario);
	}
	system("pause");
	return 0;
}
int suma(double a, int b){
	int resultado_suma;
	resultado_suma = a + b;
	return resultado_suma;
}
int resta(double c, int d){
	int resultado_resta;
	resultado_resta = c - d;
	return resultado_resta;
}