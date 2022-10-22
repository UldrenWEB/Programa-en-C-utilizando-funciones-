/*Programa de funciones (Programacion 2)*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>


int suma(int a, int b);
int resta(int c, int d);
int multiplicacion(int e, int f);
float division(float g, float h);
int main(){
	int opc, x, y;
	
	do{
		printf("\nElija la operacion que quiera realizar del siguiente menu:\n");
		printf("\n1.Suma");
		printf("\n2.Resta");
		printf("\n3.Multiplicacion");
		printf("\n4.Division");
		printf("\n5.Salir\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				printf("Ingrese el primer valor a sumar: ");
				scanf("%d", &x);
				printf("Ingrese el segundo valor a sumar: ");
				scanf("%d", &y);
				system("cls");
				printf("\nEl resultado de la suma es: %d\n", suma(x, y));
				break;
			case 2:
				printf("Ingrese el primer valor a restar: ");
				scanf("%d", &x);
				printf("Ingrese el segundo valor a restar: ");
				scanf("%d", &y);
				system("cls");
				printf("\nEl resultado de la resta es: %d\n", resta(x, y));
				break;
			case 3:
				printf("Ingrese el primer valor a multiplicar: ");
				scanf("%d", &x);
				printf("Ingrese el segundo valor a multiplicar: ");
				scanf("%d", &y);
				system("cls");
				printf("\nEl resultado de la multiplicacion es: %d\n", multiplicacion(x, y));
				break;
			case 4:
				printf("Ingrese el primer valor a dividir: ");
				scanf("%d", &x);
				printf("Ingrese el segundo valor a dividir: ");
				scanf("%d", &y);
				system("cls");
				printf("\nEl resultado de la division es: %.2f\n", division(x, y));
				break;
			case 5:
				break;
			default:
				printf("\nOpcion incorrecta ingrese de nuevo la opcion que desea\n");
				break;
		}
	}while(opc != 5);

	
	system("pause");
	return 0;
}
int suma(int a, int b){
	int resultado_suma;
	resultado_suma = a + b;
	return resultado_suma;
}
int resta(int c, int d){
	int resultado_resta;
	resultado_resta = c - d;
	return resultado_resta;
}
int multiplicacion(int e, int f){
	int resultado_multiplicacion;
	resultado_multiplicacion = e * f;
	return resultado_multiplicacion;
}
float division(float g, float h){
	int resultado_division;
	resultado_division = g / h;
	return resultado_division;
}



