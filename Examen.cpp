#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int calificacionesGrupales();
int calculaCorriente();
int conversiones();
int gastoSemanal();
int calificaciones();
int a;
float suma=0, suma2=0;
float sumaG;

int main()
{
	int op1, op2;
	printf("A continuacion se mostrara una lista que contiene diferentes funciones\n");
	system("pause");
	system("cls");
	printf("De acuerdo a la opcion elegida el programa ejecutara dicha funcion\n");
	system("pause");
	system("cls");
	do
	{
		system("cls");
		printf("\t\tSelecciona una opcion dentro de la siguiente lista\n\n");
		puts("1) Calificacion de 4 grupos con 15 alumnos");
		puts("2) Calcular la corriente de una bombilla");
		puts("3) Conversion Pesos-Dollar o Dollar-Pesos");
		puts("4) Promedio de gasto semanal");
		puts("5) Calificaciones");
		scanf("%d", &op1);
		
		switch(op1)
		{
			case 1:
				calificacionesGrupales();
				break;
			case 2:
				calculaCorriente();
				break;
			case 3:
				conversiones();
				break;
			case 4:
				gastoSemanal();
				break;
			case 5:
				calificaciones();
				break;
			default:
				printf("La opcion seleccionada no existe\n");
		}
		printf("Desea volver al menu principal: Si (1) No (0)\n");
		scanf("%d", &op2);
	}
	while(op2==1);
	printf("Presiona cualquier tecla para continuar\n");
	getch();
}

int calificacionesGrupales()
{
	float grupos[5][16];
	int a,b;
	
	system("cls");
	printf("Esta funcion permite promediar las calificaciones de 4 grupos con 15 alumnos\n");
	system("pause");
	system("cls");
	for(a=1;a<5;a++)
	{
		printf("Se analizara el grupo %d\n\n", a);
		for(b=1;b<16;b++)
		{
			printf("Introduce la calificacion del alumno %d del grupo %d\t", b,a);
			scanf("%f", &grupos[a][b]);
			sumaG = sumaG + grupos[a][b];
		}
		printf("\nLa suma total de calificaciones del grupo %d es %.2f\n", a, sumaG);
		printf("El promedio del grupo %d es: %.2f\n", a, sumaG/15);
		sumaG = 0;
		system("pause");
		system("cls");
	}
}

int calculaCorriente()
{
	float v=120, r=240;
	system("cls");
	printf("La siguiente funcion te mostrara la corriente que fluira a traves de una bombilla\n");
	printf("Sabiendo que el voltaje es de 120 volts y la resistencia de 240 ohms\n");
	printf("La corriente 'i' sera igual a el voltaje 'v' sobre la resistencia 'r'\n");
	system("pause");
	printf("\nLa corriente que fluye a traves de la bombilla es de: %.2f Amperes\n", v/r);
}

int conversiones()
{
	int op1, op2;
	float peso, dollar;
	system("cls");
	printf("La siguiente funcion hace una conversion de Pesos a Dolar o viceversa\n");
	system("pause");
	system("cls");
	do
	{
		system("cls");
		printf("\t\tSelecciona el tipo de conversion que deseas realizar\n\n");
		puts("1) De pesos a dollares");
		puts("2) De dollares a pesos");
		scanf("%d", &op1);
		
		switch(op1)
		{
			case 1:
				printf("Introduce la cantidad en pesos\n");
				scanf("%f", &peso);
				printf("La cantidad %.2f pesos es igual a: %.2f dollares\n", peso, peso/20);
				break;
			case 2:
				printf("Introduce la cantidad en dollares\n");
				scanf("%f", &dollar);
				printf("La cantidad %.2f dollares es igual a: %.2f pesos\n", dollar, dollar*20);
				break;
			default:
				printf("La opcion seleccionada no existe\n");
		}
		printf("Deseas realizar otra conversion: Si (1) No (0)\n");
		scanf("%d", &op2);
	}
	while(op2==1);
}

int gastoSemanal()
{
	const char *dia[20]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
	float gasto[6];
	
	system("cls");
	printf("La siguiente funcion te mostrara el promedio de gastos semanales en una quincena\n");
	system("pause");
	system("cls");
	
	printf("Se analizara a la semana 1\n\n");
	for(a=0;a<7;a++)
	{
		printf("Introduce los gastos del dia %s\n", dia[a]);
		scanf("%f", &gasto[a]);
		suma = suma + gasto[a];
	}
	printf("\nSe analizara a la semana 2\n");
	for(a=0;a<7;a++)
	{
		printf("Introduce los gastos del dia %s\n", dia[a]);
		scanf("%f", &gasto[a]);
		suma2 = suma2 + gasto[a];
	}
	system("cls");
	printf("El total de gastos de la semana 1 es de: %.2f\n", suma);
	printf("El promedio de gastos de la semana 1 es de: %.2f\n", suma/7);
	printf("\nEl total de gastos de la semana 2 es de: %.2f\n", suma2);
	printf("El promedio de gastos la semana 2 es de: %.2f\n", suma2/7);
}

int calificaciones()
{
	float a;
	system("cls");
	printf("La siguiente funcion te dira tu rendimiento de acuerdo a la calificacion introducida\n");
	system("pause");
	system("cls");
	printf("Introduce la calificacion obtenida en el examen\n");
	scanf("%f", &a);
	if(a<0,a>10)
	{
		printf("La calificacion ingresada no existe\n");	
	}
	else
	{
		if(a<5)
		{
			printf("Lo siento, no estas aprobado\n");
		}
		else
		{
			if(a>=5,a<7)
			{
				printf("Estas aprobado\n");
			}
			else
			{
				if(a>=7,a<9)
				{
					printf("Tienes una calificacion notable\n");
				}
				else
				{
					if(a>=9,a<10)
					{
						printf("Genial, tienes una calificacion sobresaliente\n");
					}
					else
					{
						if(a=10)
						{
							printf("Felicidades, eres el mejor, tienes una califiacion excelente\n");
						}
					}
				}
			}
		}
	}
}
